import { useQuery } from "@tanstack/react-query";
import todoService, { Todo } from "../services/todoService";
import { TODO_QUERY_KEY } from "../constants";

export default () =>
  useQuery<Todo[], Error>({
    queryKey: TODO_QUERY_KEY,
    queryFn: todoService.getAll,
    staleTime: 10 * 1000,
  });
