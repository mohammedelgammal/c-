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
import useStore from "./store";
import { useShallow } from "zustand/react/shallow";

export default (): JSX.Element => {
  const taskRef = useRef<HTMLInputElement>(null);
  const { tasks, add, del, name } = useStore(
    useShallow((state) => ({
      tasks: state.tasks,
      add: state.add,
      del: state.del,
      name: state.name,
    }))
  );

  const handleSubmit = (e: React.FormEvent<HTMLFormElement>) => {
    e.preventDefault();
    add({
      id: tasks.length,
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
            <Button colorScheme="red" onClick={() => del(id)}>
              Delete
            </Button>
          </Flex>
        ))}
      </List>
    </Stack>
  );
};
