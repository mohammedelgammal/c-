import { Grid, GridItem, Show } from "@chakra-ui/react";
import { Navbar, Aside, Main } from "./containers";
import useGenre from "./services/useGenre";

export default (): JSX.Element => {
  const { genres, isLoading, error } = useGenre();
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
