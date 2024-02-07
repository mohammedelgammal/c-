import { Stack, Text, SimpleGrid } from "@chakra-ui/react";
import { MainProps } from "../../types";
import Select from "./components/Select";
import Game from "./components/Game";
import LoadingGames from "./components/LoadingGames";
import ResponseHandler from "../../common/ResponseHandler";

export default ({
  categoryTitle,
  games,
  isLoading,
  error,
  setFilters,
}: MainProps): JSX.Element => {
  return (
    <Stack>
      <Text as="h2" fontSize="5xl" fontWeight="bold">
        {categoryTitle || "Games"}
      </Text>
      <Select setFilters={setFilters} />
      <ResponseHandler
        error={error}
        isLoading={isLoading}
        loaderComponent={<LoadingGames length={15} />}
        dataLength={games.length}
      >
        <SimpleGrid marginTop="30px" columns={3} spacing={10}>
          {games.map((game, index) => (
            <Game key={index} {...game} />
          ))}
        </SimpleGrid>
      </ResponseHandler>
    </Stack>
  );
};
