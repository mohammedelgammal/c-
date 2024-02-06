import { Flex } from "@chakra-ui/react";

import { Logo, Search, Switch } from "./components";

export default (): JSX.Element => {
  return (
    <Flex h="80px" alignItems="center" gap="30px">
      <Logo />
      <Search />
      <Switch />
    </Flex>
  );
};
