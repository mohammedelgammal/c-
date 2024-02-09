import axios, { AxiosError } from "axios";
import { useQuery } from "react-query";
import Todos, { Todo } from "./components/Todos";

export default (): JSX.Element => {
  const fetchTodos = () =>
    axios
      .get<Todo[]>("https://jsonplaceholder.typicode.com/todos")
      .then((res) => res.data);
  const {
    data: todos,
    isLoading,
    error,
  } = useQuery<Todo[], AxiosError>("todos", fetchTodos);

  return <Todos todos={todos} isLoading={isLoading} error={error} />;
};
