import { Box, GridItem, Text } from "@chakra-ui/react";
import _ from "lodash";
import useStore from "../../store";
import { GamesGrid, SelectedFilters } from "./";

export default (): JSX.Element => {
  const genres = useStore((s) => s.genres);
  const genresFilter = _.capitalize(genres).replace("-", " ");
  return (
    <GridItem area="main">
      <Box mb={10}>
        <Text fontSize="5xl" fontWeight="bold" as="h2" mb={5}>
          {genresFilter || "Games"}
        </Text>
        <SelectedFilters />
      </Box>
      <GamesGrid />
    </GridItem>
  );
};
