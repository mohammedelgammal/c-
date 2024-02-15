import { Stack } from "@chakra-ui/react";
import Counter from "./Counter";
import TasksList from "./TasksList";
import Login from "./Login";
import AuthProvider from "./AuthProvider";
import TasksProvider from "./TasksProvider";

export default (): JSX.Element => {
  return (
    <Stack spacing={10} p={10}>
      <AuthProvider>
        <TasksProvider>
          <Login />
          <Counter />
          <TasksList />
        </TasksProvider>
      </AuthProvider>
    </Stack>
  );
};
