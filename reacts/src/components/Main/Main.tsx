import Game from "./Game";
import { Alert, GridItem, SimpleGrid, Text } from "@chakra-ui/react";
import useGames from "../../hooks/useGames";
import GamesLoading from "./GamesLoading";

export default (): JSX.Element => {
  const { data: games, isLoading, error } = useGames();
  return (
    <GridItem area="main" px={5}>
      <Text fontSize="5xl" fontWeight="bold" as="h2" mb={5}>
        Games
      </Text>
      {isLoading && <GamesLoading length={10} />}
      {error?.message && <Alert status="error">{error.message}</Alert>}
      <SimpleGrid
        columns={{
          lg: 3,
          md: 2,
          base: 1,
        }}
        spacing={5}
      >
        {games?.results?.map((game) => (
          <Game key={game.id} {...game} />
        ))}
      </SimpleGrid>
    </GridItem>
  );
};
