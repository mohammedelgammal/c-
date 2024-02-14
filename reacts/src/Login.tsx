import { Button, Flex, Text } from "@chakra-ui/react";
import { useReducer } from "react";
import loginReducer from "./reducers/loginReducer";

export default (): JSX.Element => {
  const [{ name, isLoggedIn }, dispatch] = useReducer(loginReducer, {
    name: "",
    isLoggedIn: false,
  });
  return (
    <Flex flexDir="column">
      <Text mb={4}>Logged in as {name}</Text>
      <Button onClick={() => dispatch(isLoggedIn ? "LOGOUT" : "LOGIN")}>
        {isLoggedIn ? "Logout" : "Login"}
      </Button>
    </Flex>
  );
};
