import { useRef } from "react";
import { Alert, Button, Input, Stack, Text } from "@chakra-ui/react";
import { AddIcon } from "@chakra-ui/icons";
import { Post } from "../services/postService";
import useAddPosts from "../hooks/useAddPosts";

export default (): JSX.Element => {
  const postRef = useRef<HTMLInputElement>(null);
  const resetPostInput = () => {
    postRef.current!.value = "";
  };
  const addPost = useAddPosts(resetPostInput);
  const submitHandler = (e: React.FormEvent<HTMLFormElement>): void => {
    e.preventDefault();
    const newPost: Post = {
      userId: 1,
      id: 1,
      title: postRef.current!.value,
      body: "Lorem ipsum dolor sit amet, consectetur adipisicing elit. Repellat, tempore",
    };
    addPost.mutate(newPost);
  };

  return (
    <Stack spacing={5}>
      <Text fontSize="2xl">Add Post: </Text>
      {addPost.error && <Alert status="error">{addPost.error.message}</Alert>}
      <form onSubmit={submitHandler}>
        <Input type="text" ref={postRef} size="lg" isRequired />
        <Button type="submit" colorScheme="red" variant="solid" mt={2}>
          <AddIcon mr={2} /> Add Post
        </Button>
      </form>
    </Stack>
  );
};
