import axios, { AxiosError } from "axios";
import { UseQueryResult, useQuery } from "@tanstack/react-query";
import { Post } from "../components/Posts";

export default (): UseQueryResult<Post[], AxiosError> => {
  const fetchPosts = () => axios
    .get<Post[]>("https://jsonplaceholder.typicode.com/posts")
    .then((res) => res.data);
  return useQuery(["posts"], {
    queryFn: fetchPosts,
    staleTime: 10 * 1000,
  });
};
