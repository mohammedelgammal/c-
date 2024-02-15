import { Button, Flex, Text } from "@chakra-ui/react";
import { useContext } from "react";
import loginContext from "./context/loginContext";

export default (): JSX.Element => {
  const {
    login: { name, isLoggedIn },
    dispatch,
  } = useContext(loginContext);
  return (
    <Flex flexDir="column">
      <Text mb={4}>Logged in as {name}</Text>
      <Button onClick={() => dispatch(isLoggedIn ? "LOGOUT" : "LOGIN")}>
        {isLoggedIn ? "Logout" : "Login"}
      </Button>
    </Flex>
  );
};
