import axios, { AxiosError } from "axios";
import { useQuery } from "@tanstack/react-query";
import { Todo } from "../components/Todos";

export default () => {
  const fetchTodos = () =>
    axios
      .get<Todo[]>("https://jsonplaceholder.typicode.com/todos")
      .then((res) => res.data);

  return useQuery<Todo[], AxiosError>(["todos"], fetchTodos, {
    staleTime: 10 * 1000,
  });
};
