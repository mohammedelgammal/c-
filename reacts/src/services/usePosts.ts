import axios, { AxiosError } from "axios";
import {
  UseInfiniteQueryResult,
  useInfiniteQuery,
} from "@tanstack/react-query";
import { Post } from "../components/Posts";

type QueryProps = { pageSize: number; userId?: number };

export default (
  query: QueryProps
): UseInfiniteQueryResult<Post[], AxiosError> => {
  const fetchPosts = (pageParam: number) =>
    axios
      .get<Post[]>("https://jsonplaceholder.typicode.com/posts", {
        params: {
          ...(query.userId ? { userId: query.userId } : {}),
          _start: (pageParam - 1) * query.pageSize,
          _limit: query.pageSize,
        },
      })
      .then((res) => res.data);
  return useInfiniteQuery(["posts", ...(query.userId ? [query.userId] : [])], {
    queryFn: ({ pageParam }) => fetchPosts(pageParam),
    staleTime: 5 * 60 * 1000,
    keepPreviousData: true,
    getNextPageParam: (lastPage, allPages) =>
      lastPage?.length ? allPages.length + 1 : undefined,
  });
};
