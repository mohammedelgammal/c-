import { create } from "zustand";

interface Task {
  id: number;
  title: string;
}

interface Store {
  // counter
  counter: number;
  increment: () => void;
  decrement: () => void;
  reset: () => void;
  // tasks
  tasks: Task[];
  add: (task: Task) => void;
  del: (id: number) => void;
  // auth
  name: string;
  isLoggedIn: boolean;
  login: (name: string) => void;
  logout: () => void;
}

const useStore = create<Store>((set) => ({
  // counter
  counter: 0,
  increment: () => set(({ counter }) => ({ counter: counter + 1 })),
  decrement: () => set(({ counter }) => ({ counter: counter - 1 })),
  reset: () => set({ counter: 0 }),
  // tasks
  tasks: [],
  add: (task: Task) => set(({ tasks }) => ({ tasks: [...tasks, task] })),
  del: (id: number) =>
    set(({ tasks }) => ({ tasks: tasks.filter((task) => task.id !== id) })),
  // auth
  name: "",
  isLoggedIn: false,
  login: (name: string) => set({ name, isLoggedIn: true }),
  logout: () => set({ name: "", isLoggedIn: false }),
}));

export default useStore;
