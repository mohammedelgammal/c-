import { Flex } from "@chakra-ui/react";
import Editor from "./Editor";

export default (): JSX.Element => {
  return (
    <>
      <Flex gap={10}>
        <Editor />
      </Flex>
    </>
  );
};
