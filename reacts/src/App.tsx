import { Stack } from "@chakra-ui/react";
import Counter from "./Counter";
import TasksList from "./TasksList";
import Login from "./Login";
import TasksContext from "./context/tasksContext";
import { useReducer } from "react";
import tasksReducer from "./reducers/tasksReducer";
import loginReducer from "./reducers/loginReducer";
import LoginContext from "./context/loginContext";

export default (): JSX.Element => {
  const [tasks, dispatchTasks] = useReducer(tasksReducer, []);
  const [login, dispatchLogin] = useReducer(loginReducer, {
    name: "",
    isLoggedIn: false,
  });

  return (
    <Stack spacing={10} p={10}>
      <LoginContext.Provider value={{ login, dispatch: dispatchLogin }}>
        <TasksContext.Provider value={{ tasks, dispatch: dispatchTasks }}>
          <Login />
          <Counter />
          <TasksList />
        </TasksContext.Provider>
      </LoginContext.Provider>
    </Stack>
  );
};
