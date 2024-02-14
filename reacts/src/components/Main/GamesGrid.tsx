import { Alert, Flex, SimpleGrid, Spinner } from "@chakra-ui/react";
import { Game, GamesLoading } from "./";
import useGames from "../../hooks/useGames";
import useOnScreen from "../../hooks/useOnScreen";
import { Filters } from "../../App";

interface GamesGridProps {
  filters: Filters;
}

export default ({ filters }: GamesGridProps): JSX.Element => {
  const {
    data,
    isLoading,
    error,
    fetchNextPage,
    isFetchingNextPage,
    hasNextPage,
  } = useGames(filters);
  const { isVisible, containerRef } = useOnScreen<HTMLDivElement>();
  if (hasNextPage && !error && isVisible) fetchNextPage();
  return (
    <>
      {isLoading && <GamesLoading length={10} />}
      {error?.message && <Alert status="error">{error.message}</Alert>}
      {!data?.pages[0].count && <Alert status="error">No matching data</Alert>}
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
    </>
  );
};
