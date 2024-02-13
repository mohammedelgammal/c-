import { useState } from "react";
import { Grid, GridItem, Show } from "@chakra-ui/react";
import { Navbar, Aside, Main } from "./containers";
import useGenre from "./services/useGenre";
import { Filters } from "./types";
import useGames from "./services/useGames";

export default (): JSX.Element => {
  const {
    genres,
    isLoading: isGeneresLoading,
    error: genresError,
  } = useGenre();
  const [filters, setFilters] = useState<Filters>({
    genres: {
      id: 0,
      name: "",
      slug: "",
      games: [],
      image_background: "",
    },
    platforms: "",
    ordering: "",
    search: "",
  });
  const {
    games,
    isLoading: isGamesLoading,
    error: gamesError,
  } = useGames(filters);

  return (
    <Flex gap={20}>
      <Stack spacing={10} flex={1}>
        <TodosForm />
        <Todos />
      </Stack>
      <Stack spacing={10} flex={1}>
        <PostsForm />
        <Posts />
      </Stack>
    </Flex>
  );
};
