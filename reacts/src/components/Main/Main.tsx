import {
  Alert,
  Button,
  GridItem,
  SimpleGrid,
  Spinner,
  Text,
} from "@chakra-ui/react";
import { Game, GamesLoading } from "./";
import useGames from "../../hooks/useGames";

export default (): JSX.Element => {
  const { data, isLoading, error, fetchNextPage, isFetchingNextPage } =
    useGames();
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
        {data?.pages.map((page) =>
          page?.results?.map((game) => <Game key={game.id} {...game} />)
        )}
      </SimpleGrid>
      <Button
        mt={5}
        w={"100%"}
        onClick={() => fetchNextPage()}
        isDisabled={isFetchingNextPage}
      >
        {isFetchingNextPage ? <Spinner /> : "load more"}
      </Button>
    </GridItem>
  );
};
