import {
  Button,
  Flex,
  Input,
  List,
  ListItem,
  Stack,
  Text,
} from "@chakra-ui/react";
import { useRef } from "react";
import useTasks from "./hooks/useTasks";
import useAuth from "./hooks/useAuth";

export default (): JSX.Element => {
  const taskRef = useRef<HTMLInputElement>(null);
  const { tasks, dispatch } = useTasks();
  const {
    login: { name },
  } = useAuth();
  const handleSubmit = (e: React.FormEvent<HTMLFormElement>) => {
    e.preventDefault();
    dispatch({
      type: "ADD",
      title: taskRef.current!.value,
    });
    taskRef.current!.value = "";
  };
  return (
    <Stack>
      <form onSubmit={handleSubmit}>
        <Input
          isRequired
          ref={taskRef}
          type="text"
          placeholder="Add task"
          size="lg"
        />
        <Text>Showing tasks for: {name}</Text>
      </form>
      <List mt={10} spacing={5}>
        {tasks.length === 0 && (
          <Text textAlign="center">No tasks! Start by adding some</Text>
        )}
        {tasks.map(({ id, title }) => (
          <Flex key={id} justifyContent="space-between">
            <ListItem>{title}</ListItem>
            <Button
              colorScheme="red"
              onClick={() =>
                dispatch({
                  type: "DELETE",
                  id: id,
                })
              }
            >
              Delete
            </Button>
          </Flex>
        ))}
      </List>
    </Stack>
  );
};
