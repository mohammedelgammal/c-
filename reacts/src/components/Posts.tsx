import { Button, Card, Input, Spinner, Stack, Text } from "@chakra-ui/react";
import usePosts from "../services/usePosts";
import { useRef } from "react";
import { useMutation, useQueryClient } from "@tanstack/react-query";
import apiClient from "../services/apiClient";

interface Post {
  id: number;
  title: string;
  body: string;
  userId: number;
}

interface Pages {
  pages: Post[][];
}

export default (): JSX.Element => {
  const pageSize = 50;
  const inputRef = useRef<HTMLInputElement>(null);
  const queryClient = useQueryClient();
  const addPost = useMutation({
    mutationFn: (newPost: Post) =>
      apiClient.post("/posts", newPost).then((res) => res.data),
    onSuccess: (resPost: Post) => {
      queryClient.setQueryData<Pages>(["posts"], (currentPages) => ({
        ...currentPages,
        pages: [[resPost, ...currentPages!.pages[0]], ...currentPages!.pages],
      }));
      inputRef.current!.value = "";
    },
  });
  const {
    data: postsPages,
    isLoading,
    error,
    isFetchingNextPage,
    fetchNextPage,
    hasNextPage,
  } = usePosts({ pageSize });
  const handleSubmit = (e: React.FormEvent<HTMLFormElement>): void => {
    e.preventDefault();
    addPost.mutate({
      id: 1,
      title: inputRef.current!.value,
      body: "new body from me",
      userId: 1,
    });
  };

  return (
    <Stack spacing={5}>
      <Text fontSize="3xl" fontWeight="bolder" as="h1">
        Posts
      </Text>
      {isLoading && <Spinner />}
      {error?.message && <span>{error?.message}</span>}
      <form onSubmit={(e) => handleSubmit(e)}>
        <Input ref={inputRef} type="text" size="lg" />
      </form>
      {postsPages?.pages.map((postPage) =>
        postPage.map(({ id, title, body }) => (
          <Card bg="green.100" key={id}>
            <Text fontWeight="bold">{title}</Text>
            <p>{body}</p>
          </Card>
        ))
      )}
      {hasNextPage && (
        <Button onClick={() => fetchNextPage()}>
          {isFetchingNextPage ? <Spinner /> : "Load more"}
        </Button>
      )}
    </Stack>
  );
};

export { type Post };
