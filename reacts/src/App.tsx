import { Stack } from "@chakra-ui/react";
import Counter from "./Counter";
import TasksList from "./TasksList";

export default (): JSX.Element => {
  return (
    <Stack spacing={10} p={10}>
      <Counter />;
      <TasksList />
    </Stack>
  );
};
