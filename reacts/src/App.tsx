import { Stack } from "@chakra-ui/react";
import Counter from "./Counter";
import TasksList from "./TasksList";
import Login from "./Login";
import TasksContext from "./context/tasksContext";
import { useReducer } from "react";
import tasksReducer from "./reducers/tasksReducer";

export default (): JSX.Element => {
  const [tasks, dispatch] = useReducer(tasksReducer, []);
  return (
    <Stack spacing={10} p={10}>
      <TasksContext.Provider value={{ tasks, dispatch }}>
        <Login />
        <Counter />
        <TasksList />
      </TasksContext.Provider>
    </Stack>
  );
};
