import Game from "./Game";
import { Alert, GridItem, SimpleGrid, Spinner, Text } from "@chakra-ui/react";
import useGames from "../../hooks/useGames";

export default (): JSX.Element => {
  const { data: games, isLoading, error } = useGames();
  return (
    <GridItem area="main" px={5}>
      <Text fontSize="5xl" fontWeight="bold" as="h2" mb={5}>
        Games
      </Text>
      {isLoading && <Spinner />}
      {error?.message && <Alert status="error">{error.message}</Alert>}
      <SimpleGrid
        columns={{
          lg: 3,
          sm: 1,
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
