import { Flex, Stack } from "@chakra-ui/react";
import Posts from "./components/Posts";
import PostsForm from "./components/PostsForm";
import Todos from "./components/Todos";
import TodosForm from "./components/TodosForm";

export default (): JSX.Element => {
  return (
    <Flex gap={20}>
      <Stack spacing={10} flex={1}>
        <TodosForm />
        <Todos />
      </Stack>
      <Stack spacing={10} flex={1}>
        <PostsForm />
        <Posts />
      </Stack>
    </Flex>
  );
};
