import { Stack } from "@chakra-ui/react";
import Posts from "./components/Posts";
import PostsForm from "./components/PostsForm";
// import Todos from "./components/Todos";
// import TodosForm from "./components/TodosForm";

export default (): JSX.Element => {
  return (
    <Stack spacing={10}>
      {/* <TodosForm />
      <Todos /> */}
      <PostsForm />
      <Posts />
    </Stack>
  );
};
