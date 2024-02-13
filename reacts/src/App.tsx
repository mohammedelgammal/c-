import { useState } from "react";
import { Grid, GridItem, Show } from "@chakra-ui/react";
import { Navbar, Aside, Main } from "./containers";
import { Filters, Genre } from "./types";
import useData from "./services/useData";
import useGames from "./services/useGames";

export default (): JSX.Element => {
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
    data: genres,
    isLoading: isGeneresLoading,
    error: genresError,
  } = useData<Genre>("/genres");
  const { games, isGamesLoading, gamesError } = useGames(filters);

  return (
    <Grid
      templateAreas={{
        base: `"navbar"
               "main"`,
        lg: `"navbar navbar"
             "aside main"`,
      }}
      p={"20px"}
      gridTemplateColumns={{
        base: "1fr",
        lg: "200px auto",
      }}
      gap={10}
    >
      <GridItem area={"navbar"}>
        <Navbar setFilters={setFilters} />
      </GridItem>
      <Show above="lg">
        <GridItem area={"aside"}>
          <Aside
            genres={genres}
            isLoading={isGeneresLoading}
            error={genresError}
            genre={filters.genres}
            setFilters={setFilters}
          />
        </GridItem>
      </Show>
      <GridItem area={"main"}>
        <Main
          categoryTitle={filters.genres.name}
          games={games}
          isLoading={isGamesLoading}
          error={gamesError}
          setFilters={setFilters}
        />
      </GridItem>
    </Grid>
  );
};
