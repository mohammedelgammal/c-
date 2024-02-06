import { useEffect, useState } from "react";
import { Grid, GridItem, Show } from "@chakra-ui/react";
import { Navbar, Aside, Main } from "./containers";
import apiClient from "./services/apiClient";
import { Genre } from "./types";
import { AxiosError } from "axios";

export default (): JSX.Element => {
  const [genres, setGenres] = useState<Genre[]>([]);
  const [isLoading, setLoading] = useState<boolean>(true);
  const [error, setError] = useState<string>("");
  useEffect(() => {
    const controller = new AbortController();
    apiClient
      .get<{
        results: Genre[];
      }>("/genres")
      .then(
        (response) => setGenres(response.data.results),
        (error: AxiosError) => setError(error.message)
      )
      .then(() => setLoading(false));
    return () => controller.abort();
  }, []);
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
          <Aside genres={genres} isLoading={isLoading} error={error} />
        </GridItem>
      </Show>
      <GridItem area={"main"}>
        <Main categoryTitle="" games={[]} />
      </GridItem>
    </Grid>
  );
};
