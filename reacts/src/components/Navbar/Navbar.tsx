import { GridItem } from "@chakra-ui/react";
import { ThemeSwitch } from "./";

export default (): JSX.Element => {
  return (
    <GridItem bg="red" area="nav">
      This is navbar <ThemeSwitch />
    </GridItem>
  );
};
