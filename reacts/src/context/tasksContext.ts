import React from "react";
import { Action, Task } from "../reducers/tasksReducer";

export interface TasksContextType {
  tasks: Task[];
  dispatch: React.Dispatch<Action>;
}

export default React.createContext<TasksContextType>({} as TasksContextType);
