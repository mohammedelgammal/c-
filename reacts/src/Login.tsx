import { Button, Flex, Text } from "@chakra-ui/react";
import useStore from "./store";

export default (): JSX.Element => {
  const { name, isLoggedIn, login, logout } = useStore();
  return (
    <Flex flexDir="column">
      <Text mb={4}>Logged in as {name}</Text>
      <Button onClick={() => (isLoggedIn ? logout() : login("Mosh Hamedani"))}>
        {isLoggedIn ? "Logout" : "Login"}
      </Button>
    </Flex>
  );
};
