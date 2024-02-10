import axios, { AxiosError } from "axios";
import { UseQueryResult, useQuery } from "@tanstack/react-query";
import { Post } from "../components/Posts";

export default (userId?: number): UseQueryResult<Post[], AxiosError> => {
  const fetchPosts = () =>
    axios
      .get<Post[]>("https://jsonplaceholder.typicode.com/posts", {
        params: {
          ...(userId ? { userId } : {}),
        },
      })
      .then((res) => res.data);
  return useQuery(userId ? ["users", userId, "posts"] : ["posts"], {
    queryFn: fetchPosts,
    staleTime: 10 * 1000,
  });
};
