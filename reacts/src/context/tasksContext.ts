import React from "react";
import { Action, Task } from "../reducers/tasksReducer";

interface TasksContext {
  tasks: Task[];
  dispatch: React.Dispatch<Action>;
}

export default React.createContext<TasksContext>({} as TasksContext);
