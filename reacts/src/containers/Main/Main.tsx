import { Stack, Text, SimpleGrid } from "@chakra-ui/react";
import { MainProps } from "../../types";
import Select from "./components/Select";
import Game from "./components/Game";
import ErrorMessage from "../../common/ErrorMessage";
import LoadingGames from "./components/LoadingGames";

export default ({
  categoryTitle,
  games,
  isLoading,
  error,
}: MainProps): JSX.Element => {
  return (
    <Stack>
      <Text as="h2" fontSize="5xl" fontWeight="bold">
        {categoryTitle || "Games"}
      </Text>
      <Select />
      {isLoading ? (
        <LoadingGames length={5} />
      ) : error && !games.length ? (
        <ErrorMessage error={error} />
      ) : (
        <SimpleGrid marginTop="30px" columns={3} spacing={10}>
          {games.map((game, index) => (
            <Game key={index} {...game} />
          ))}
        </SimpleGrid>
      )}
    </Stack>
  );
};
