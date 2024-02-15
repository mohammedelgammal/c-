import { ReactNode, useReducer } from "react";
import TasksContext from "./context/tasksContext";
import tasksReducer from "./reducers/tasksReducer";

export default ({ children }: { children: ReactNode }) => {
  const [tasks, dispatch] = useReducer(tasksReducer, []);
  return (
    <TasksContext.Provider value={{ tasks, dispatch }}>
      {children}
    </TasksContext.Provider>
  );
};
