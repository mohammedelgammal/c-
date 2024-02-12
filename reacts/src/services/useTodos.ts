import { AxiosError } from "axios";
import {
  UseInfiniteQueryResult,
  useInfiniteQuery,
} from "@tanstack/react-query";
import apiClient from "./apiClient";
import { Todo } from "../hooks/useAddTodo";

export default (query: {
  pageSize: number;
}): UseInfiniteQueryResult<Todo[], AxiosError> => {
  const fetchTodos = (pageParam: number = 1) =>
    apiClient
      .get<Todo[]>("/todos", {
        params: {
          _start: (pageParam - 1) * query.pageSize,
          _limit: query.pageSize,
        },
      })
      .then((response) => response.data);
  return useInfiniteQuery<Todo[], AxiosError>(["todos"], {
    queryFn: ({ pageParam }) => fetchTodos(pageParam),
    staleTime: 2 * 60 * 1000,
    keepPreviousData: true,
    getNextPageParam: (lastPage, allPages) =>
      lastPage.length ? allPages.length + 1 : undefined,
  });
};
