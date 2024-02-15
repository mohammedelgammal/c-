import { Button, Flex, Text } from "@chakra-ui/react";
import useAuth from "./hooks/useAuth";

export default (): JSX.Element => {
  const {
    login: { name, isLoggedIn },
    dispatch,
  } = useAuth();
  return (
    <Flex flexDir="column">
      <Text mb={4}>Logged in as {name}</Text>
      <Button onClick={() => dispatch(isLoggedIn ? "LOGOUT" : "LOGIN")}>
        {isLoggedIn ? "Logout" : "Login"}
      </Button>
    </Flex>
  );
};
