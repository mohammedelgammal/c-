import {
  UseMutationResult,
  useMutation,
  useQueryClient,
} from "@tanstack/react-query";
import postService, { Post } from "../services/postService";
import { POST_QUERY_KEY } from "../constants";

export default (
  onAdd: () => void
): UseMutationResult<Post, Error, Post, Post[]> => {
  const queryClient = useQueryClient();
  return useMutation<Post, Error, Post, Post[]>({
    mutationKey: POST_QUERY_KEY,
    mutationFn: postService.post,
    onMutate: (newPost) => {
      const previousPosts = queryClient.getQueryData<Post[]>(POST_QUERY_KEY);
      queryClient.setQueryData<Post[]>(POST_QUERY_KEY, (posts = []) => [
        newPost,
        ...posts,
      ]);
      onAdd();
      return previousPosts;
    },
    onSuccess: (savedPost, newPost) => {
      queryClient.setQueryData<Post[]>(POST_QUERY_KEY, (posts) =>
        posts?.map((post) => (post === newPost ? savedPost : post))
      );
    },
    onError: (...[, , previousPosts = []]) =>
      queryClient.setQueryData(POST_QUERY_KEY, previousPosts),
  });
};
