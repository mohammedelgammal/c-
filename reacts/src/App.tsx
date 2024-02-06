import { useState } from "react";
import { Grid, GridItem, Show } from "@chakra-ui/react";
import { Navbar, Aside, Main } from "./containers";
import useGenre from "./services/useGenre";
import { Genre } from "./types";
import useGames from "./services/useGames";

export default (): JSX.Element => {
  const {
    genres,
    isLoading: isGeneresLoading,
    error: genresError,
  } = useGenre();
  const [genre, setGenre] = useState<Genre>({
    id: 0,
    name: "",
    games: [],
    image_background: "",
  });
  const {
    games,
    isLoading: isGamesLoading,
    error: gamesError,
  } = useGames(genre);
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
    >
      <GridItem area={"navbar"}>
        <Navbar />
      </GridItem>
      <Show above="lg">
        <GridItem area={"aside"}>
          <Aside
            genres={genres}
            isLoading={isGeneresLoading}
            error={genresError}
            genre={genre}
            setGenre={setGenre}
          />
        </GridItem>
      </Show>
      <GridItem area={"main"}>
        <Main
          categoryTitle={genre.name}
          games={games}
          isLoading={isGamesLoading}
          error={gamesError}
        />
      </GridItem>
    </Grid>
  );
};
