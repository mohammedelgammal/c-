import { Button, Flex, Text } from "@chakra-ui/react";
import useStore from "./store";
import { useShallow } from "zustand/react/shallow";

export default (): JSX.Element => {
  const { name, isLoggedIn, login, logout } = useStore(
    useShallow((state) => ({
      name: state.name,
      isLoggedIn: state.isLoggedIn,
      login: state.login,
      logout: state.logout,
    }))
  );
  return (
    <Flex flexDir="column">
      <Text mb={4}>Logged in as {name}</Text>
      <Button onClick={() => (isLoggedIn ? logout() : login("Mosh Hamedani"))}>
        {isLoggedIn ? "Logout" : "Login"}
      </Button>
    </Flex>
  );
};
