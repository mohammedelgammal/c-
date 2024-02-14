import { Box, GridItem, Text } from "@chakra-ui/react";
import { Filters } from "../../App";
import { GamesGrid, SelectedFilters } from "./";

interface MainProps {
  setFilters: React.Dispatch<React.SetStateAction<Filters>>;
  filters: Filters;
}

export default ({ setFilters, filters }: MainProps): JSX.Element => {
  return (
    <GridItem area="main">
      <Box mb={10}>
        <Text fontSize="5xl" fontWeight="bold" as="h2" mb={5}>
          Games
        </Text>
        <SelectedFilters setFilters={setFilters} filters={filters} />
      </Box>
      <GamesGrid filters={filters} />
    </GridItem>
  );
};
