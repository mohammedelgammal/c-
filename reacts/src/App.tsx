import { Grid, GridItem, Show } from "@chakra-ui/react";
import Navbar from "./containers/Navbar/Navbar";
import Aside from "./containers/Aside/Aside";

export default (): JSX.Element => {
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
          <Aside genres={[]} />
        </GridItem>
      </Show>
      <GridItem area={"main"} bg={"royalblue"}>
        main
      </GridItem>
    </Grid>
  );
};
