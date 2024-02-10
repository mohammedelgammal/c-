import { AxiosError } from "axios";
import { Card, Spinner, Stack, Text } from "@chakra-ui/react";

interface Post {
  id: number;
  title: string;
  body: string;
}

interface PostsProps {
  posts: Post[] | undefined;
  isLoading: boolean;
  error: AxiosError | null;
}

export default ({ posts, isLoading, error }: PostsProps): JSX.Element => {
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
    </Stack>
  );
};

export { type Post };
