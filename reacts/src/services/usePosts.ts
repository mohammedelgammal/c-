import axios, { AxiosError } from "axios";
import { UseQueryResult, useQuery } from "@tanstack/react-query";
import { Post } from "../components/Posts";

type QueryProps = { page: number; pageSize: number; userId?: number };

export default (query: QueryProps): UseQueryResult<Post[], AxiosError> => {
  const fetchPosts = () =>
    axios
      .get<Post[]>("https://jsonplaceholder.typicode.com/posts", {
        params: {
          ...(query.userId ? { userId: query.userId } : {}),
          _start: (query.page - 1) * query.pageSize,
          _limit: query.pageSize,
        },
      })
      .then((res) => res.data);
  return useQuery(
    [
      "posts",
      {
        page: query.page,
        ...(query.userId ? { userId: query.userId } : {}),
      },
    ],
    {
      queryFn: fetchPosts,
      staleTime: 5 * 60 * 1000,
      keepPreviousData: true,
    }
  );
};
