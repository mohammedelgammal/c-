import { Stack } from "@chakra-ui/react";
import Counter from "./Counter";
import TasksList from "./TasksList";
import Login from "./Login";

export default (): JSX.Element => {
  return (
    <Stack spacing={10} p={10}>
      <Login />
      <Counter />
      <TasksList />
    </Stack>
  );
};
