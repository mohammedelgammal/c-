import { HStack, List, Text } from "@chakra-ui/react";
import { NavLink } from "react-router-dom";

export default (): JSX.Element => {
  return (
    <HStack spacing={10}>
      <Text size="lg" fontWeight="bold">
        My App
      </Text>
      <List display="flex" gap={5}>
        <NavLink
          to=""
          style={({ isActive }) => ({
            color: isActive ? "red" : "whitesmoke",
          })}
        >
          Home
        </NavLink>
        <NavLink
          to="users"
          style={({ isActive }) => ({
            color: isActive ? "red" : "whitesmoke",
          })}
        >
          Users
        </NavLink>
      </List>
    </HStack>
  );
};
