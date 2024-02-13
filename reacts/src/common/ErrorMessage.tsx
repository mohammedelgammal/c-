import { Flex, Text } from "@chakra-ui/react";
import { CloseIcon } from "@chakra-ui/icons";

export default ({ error }: { error: string }): JSX.Element => (
  <Flex alignItems="center" justifyContent="center" gap="10px">
    <CloseIcon color="red.500" />
    <Text color="red.500">{error}</Text>
  </Flex>
);
