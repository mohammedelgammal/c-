import { GridItem } from "@chakra-ui/react";
import { Logo, Search, ThemeSwitch } from "./";

export default (): JSX.Element => {
  return (
    <GridItem display="flex" alignItems="center" gap="30px" area="nav">
      <Logo />
      <Search />
      <ThemeSwitch />
    </GridItem>
  );
};
