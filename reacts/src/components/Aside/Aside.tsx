import { GridItem, Show } from "@chakra-ui/react";

export default (): JSX.Element => {
  return (
    <Show above="lg">
      <GridItem bg="blue" area="aside">
        This is Aside
      </GridItem>
    </Show>
  );
};
