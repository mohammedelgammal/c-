import { useRef } from "react";
import useAddTodos from "../hooks/useAddTodos";
import { Todo } from "../services/todoService";
import { Button, Input, Stack, Text } from "@chakra-ui/react";
import { AddIcon } from "@chakra-ui/icons";

export default (): JSX.Element => {
  const todoRef = useRef<HTMLInputElement>(null);
  const addTodo = useAddTodos(() => {
    todoRef.current!.value = "";
  });

  const submitHandler = (e: React.FormEvent<HTMLFormElement>): void => {
    e.preventDefault();
    const newTodo: Todo = {
      userId: 1,
      id: 1,
      title: todoRef.current!.value,
      completed: true,
    };
    addTodo.mutate(newTodo);
  };
  return (
    <Stack spacing={5}>
      <Text fontSize="2xl">Add todo: </Text>
      <form onSubmit={submitHandler}>
        <Input type="text" ref={todoRef} size="lg" isRequired />
        <Button type="submit" colorScheme="red" variant="solid" mt={2}>
          <AddIcon mr={2} /> Add Todo
        </Button>
      </form>
    </Stack>
  );
};
