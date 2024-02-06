import { Flex, Text } from "@chakra-ui/react";
import { CloseIcon } from "@chakra-ui/icons";

export default ({ error }: { error: string }): JSX.Element => (
  <Flex alignItems="center" justifyContent="center">
    <Text color="red.500">{error}</Text>
    <CloseIcon color="red.500" />
  </Flex>
);
