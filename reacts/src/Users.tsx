import { HStack, List, ListItem } from "@chakra-ui/react";
import { Link, Outlet } from "react-router-dom";

export default (): JSX.Element => {
  return (
    <HStack>
      <List>
        <ListItem>
          <Link to={"/users/1"}>User one</Link>
        </ListItem>
        <ListItem>
          <Link to={"/users/2"}>User two</Link>
        </ListItem>
        <ListItem>
          <Link to={"/users/3"}>User three</Link>
        </ListItem>
      </List>
      <Outlet />
    </HStack>
  );
};
