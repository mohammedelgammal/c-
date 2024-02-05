import { Flex } from "@chakra-ui/react";

import Logo from "./components/Logo";
import Search from "./components/Search";
import Switch from "./components/Switch";

export default (): JSX.Element => {
  return (
    <Flex h="80px" alignItems="center" gap="30px">
      <Logo />
      <Search />
      <Switch />
    </Flex>
  );
};
