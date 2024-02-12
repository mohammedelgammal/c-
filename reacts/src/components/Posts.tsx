import { useQuery } from "@tanstack/react-query";
import { Alert, List, ListItem, Spinner, Stack, Text } from "@chakra-ui/react";
import { POST_QUERY_KEY } from "../constants";
import postService, { Post } from "../services/postService";

export default (): JSX.Element => {
  const {
    data: posts,
    isLoading,
    error,
  } = useQuery<Post[], Error>({
    queryKey: POST_QUERY_KEY,
    queryFn: postService.getAll,
    staleTime: 3 * 60 * 1000, // 3min
  });
  return (
    <Stack>
      <Text fontSize="2xl" as="h1">
        Posts
      </Text>
      <List>
        {isLoading && <Spinner />}
        {error && <Alert status="error">{error.message}</Alert>}
        {posts?.map(({ id, title, body }) => (
          <ListItem key={id} borderY="1px dashed green" mb={5} p={3}>
            <Text color="green.500" mb={2}>
              {id}: &nbsp;{title}
            </Text>
            <Text color="tale">{body}</Text>
          </ListItem>
        ))}
      </List>
    </Stack>
  );
};
