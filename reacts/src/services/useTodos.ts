import axios, { AxiosError } from "axios";
import { UseQueryResult, useQuery } from "react-query";
import { Todo } from "../components/Todos";

export default (): UseQueryResult<Todo[], AxiosError> => {
  const fetchTodos = () =>
    axios
      .get<Todo[]>("https://jsonplaceholder.typicode.com/todos")
      .then((res) => res.data);

  return useQuery<Todo[], AxiosError>("todos", fetchTodos);
};
