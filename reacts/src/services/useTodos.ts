import { AxiosError } from "axios";
import { UseQueryResult, useQuery } from "@tanstack/react-query";
import apiClient from "./apiClient";
import { Todo } from "../components/Todos";

export default (query: {
  page: number;
  pageSize: number;
}): UseQueryResult<Todo[], AxiosError> => {
  const fetchTodos = () =>
    apiClient
      .get<Todo[]>("/todos", {
        params: {
          _start: (query.page - 1) * query.pageSize,
          _limit: query.pageSize,
        },
      })
      .then((response) => response.data);
  return useQuery<Todo[], AxiosError>(["todos", query.page], {
    queryFn: fetchTodos,
    staleTime: 2 * 60 * 1000,
    keepPreviousData: true,
  });
};
