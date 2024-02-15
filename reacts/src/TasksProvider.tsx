import { ReactNode } from "react";
import TasksContext, { TasksContextType } from "./context/tasksContext";

export default ({ children }: { children: ReactNode }) => {
  return (
    <TasksContext.Provider value={{} as TasksContextType}>
      {children}
    </TasksContext.Provider>
  );
};
