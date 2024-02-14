import {
  Alert,
  Flex,
  GridItem,
  SimpleGrid,
  Spinner,
  Text,
} from "@chakra-ui/react";
import { Game, GamesLoading } from "./";
import useGames from "../../hooks/useGames";
import useOnScreen from "../../hooks/useOnScreen";

export default (): JSX.Element => {
  const { data, isLoading, error, fetchNextPage, isFetchingNextPage } =
    useGames();
  const { isVisible, containerRef } = useOnScreen<HTMLDivElement>();
  if (!error && isVisible) fetchNextPage();
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
      <Flex ref={containerRef} justifyContent="center" alignItems="center">
        {isFetchingNextPage && (
          <Spinner
            m={5}
            thickness="4px"
            speed="0.65s"
            emptyColor="gray.200"
            color="blue.500"
            size="xl"
          />
        )}
      </Flex>
    </GridItem>
  );
};
