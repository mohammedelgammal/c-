import { Button, Card, Spinner, Stack, Text } from "@chakra-ui/react";
import usePosts from "../services/usePosts";
import { useState } from "react";

interface Post {
  id: number;
  title: string;
  body: string;
}

export default (): JSX.Element => {
  const pageSize = 10;
  const [page, setPage] = useState<number>(1);
  const { data: posts, isLoading, error } = usePosts({ page, pageSize });

  return (
    <Stack spacing={5}>
      <Text fontSize="3xl" fontWeight="bolder" as="h1">
        Posts
      </Text>
      {isLoading && <Spinner />}
      {error?.message && <span>{error?.message}</span>}
      {posts?.map(({ id, title, body }) => (
        <Card bg="green.100" key={id}>
          <Text fontWeight="bold">{title}</Text>
          <p>{body}</p>
        </Card>
      ))}
      <Button
        onClick={() => setPage((page) => page - 1)}
        isDisabled={page === 1}
      >
        Previous
      </Button>
      <Button onClick={() => setPage((page) => page + 1)}>Next</Button>
    </Stack>
  );
};

export { type Post };
