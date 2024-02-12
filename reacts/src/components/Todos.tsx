import _ from "lodash";
import useTodos from "../services/useTodos";
import {
  Alert,
  Button,
  Input,
  List,
  ListIcon,
  ListItem,
  Spinner,
} from "@chakra-ui/react";
import { MdCheckCircle, MdError } from "react-icons/md";
import React, { useRef } from "react";
import useAddTodo from "../hooks/useAddTodo";

export default (): JSX.Element => {
  const maxPageSize = 10;
  const inputRef = useRef<HTMLInputElement>(null);
  const addTodo = useAddTodo(() => (inputRef.current!.value = ""));
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
      {addTodo.error ? <Alert>{addTodo.error.message}</Alert> : null}
      <form onSubmit={(e) => handleSubmitForm(e)}>
        <Input
          ref={inputRef}
          type="text"
          size="lg"
          placeholder="Add Todo title"
          isRequired
        />
        <Button isDisabled={addTodo.isLoading} type="submit">
          {addTodo.isLoading ? "Adding..." : "Add"}
        </Button>
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
