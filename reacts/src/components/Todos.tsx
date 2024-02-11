import _ from "lodash";
import useTodos from "../services/useTodos";
import {
  Button,
  Input,
  List,
  ListIcon,
  ListItem,
  Spinner,
} from "@chakra-ui/react";
import { MdCheckCircle, MdError } from "react-icons/md";
import React, { useRef } from "react";
import { useMutation, useQueryClient } from "@tanstack/react-query";
import apiClient from "../services/apiClient";

interface Todo {
  id: 1;
  title: string;
  completed: boolean;
}

export default (): JSX.Element => {
  const maxPageSize = 10;
  const inputRef = useRef<HTMLInputElement>(null);
  const queryClient = useQueryClient();
  const addTodo = useMutation({
    mutationFn: (newTodo: Todo) =>
      apiClient.post("/todos", newTodo).then((res) => res.data),
    onSuccess: (newTodo: Todo) => {
      queryClient.setQueryData<{ pages: Todo[][] }>(
        ["todos"],
        (currentTodos) => ({
          ...currentTodos,
          pages: [[newTodo, ...currentTodos!.pages[0]], ...currentTodos!.pages],
        })
      );
      inputRef.current!.value = "";
    },
  });
  const {
    data: todos,
    isLoading,
    error,
    isFetchingNextPage,
    fetchNextPage,
  } = useTodos({ pageSize: maxPageSize });
  const handleSubmitForm = (e: React.FormEvent<HTMLFormElement>): void => {
    e.preventDefault();
    addTodo.mutate({
      id: 1,
      title: inputRef.current!.value,
      completed: true,
    });
  };
  return (
    <List spacing={3}>
      {isLoading && <Spinner />}
      {error && <p>{error.message}</p>}
      <form onSubmit={(e) => handleSubmitForm(e)}>
        <Input
          ref={inputRef}
          type="text"
          size="lg"
          placeholder="Add Todo title"
          isRequired
        />
      </form>
      {todos?.pages.map((page, index) => (
        <React.Fragment key={index}>
          {page.map(({ id, title, completed }) => (
            <ListItem key={id}>
              <ListIcon
                as={completed ? MdCheckCircle : MdError}
                color={completed ? "green.500" : "red.500"}
              />
              {title}
            </ListItem>
          ))}
        </React.Fragment>
      ))}

      <Button isDisabled={isFetchingNextPage} onClick={() => fetchNextPage()}>
        {isFetchingNextPage ? "loading..." : "Load more"}
      </Button>
    </List>
  );
};

export { type Todo };
