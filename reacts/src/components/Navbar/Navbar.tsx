import { GridItem } from "@chakra-ui/react";
import { Logo, Search, ThemeSwitch } from "./";
import { Filters } from "../../App";

interface NavbarProps {
  setFilters: React.Dispatch<React.SetStateAction<Filters>>;
}

export default ({ setFilters }: NavbarProps): JSX.Element => {
  return (
    <GridItem display="flex" alignItems="center" gap="30px" area="nav">
      <Logo />
      <Search setFilters={setFilters} />
      <ThemeSwitch />
    </GridItem>
  );
};
