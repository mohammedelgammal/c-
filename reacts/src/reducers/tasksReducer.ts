export interface Task {
  id: number;
  title: string;
}

export interface Action {
  type: "ADD" | "DELETE";
  title?: string;
  id?: number;
}

export default (tasks: Task[], { type, title, id }: Action): Task[] => {
  if (type === "ADD" && title)
    return [{ id: tasks.length + 1, title }, ...tasks];
  if (type === "DELETE" && id) return tasks.filter((task) => task.id !== id);
  return tasks;
};
