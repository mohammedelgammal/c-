import { Flex } from "@chakra-ui/react";
import { Logo, Search, Switch } from "./components";
import { Filters, SetState } from "../../types";

export default ({
  setFilters,
}: {
  setFilters: SetState<Filters>;
}): JSX.Element => {
  return (
    <Flex h="80px" alignItems="center" gap="30px">
      <Logo />
      <Search setFilters={setFilters} />
      <Switch />
    </Flex>
  );
};
