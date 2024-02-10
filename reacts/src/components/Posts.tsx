import { Button, Card, Spinner, Stack, Text } from "@chakra-ui/react";
import usePosts from "../services/usePosts";

interface Post {
  id: number;
  title: string;
  body: string;
}

export default (): JSX.Element => {
  const pageSize = 50;
  const {
    data: postsPages,
    isLoading,
    error,
    isFetchingNextPage,
    fetchNextPage,
    hasNextPage,
  } = usePosts({ pageSize });

  return (
    <Stack spacing={5}>
      <Text fontSize="3xl" fontWeight="bolder" as="h1">
        Posts
      </Text>
      {isLoading && <Spinner />}
      {error?.message && <span>{error?.message}</span>}
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
