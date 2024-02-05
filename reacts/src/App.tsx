import { Grid, GridItem, Show } from "@chakra-ui/react";
import Navbar from "./containers/Navbar/Navbar";

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
    >
      <GridItem area={"navbar"}>
        <Navbar />
      </GridItem>
      <Show above="lg">
        <GridItem area={"aside"} bg={"rebeccapurple"}>
          aside
        </GridItem>
      </Show>
      <GridItem area={"main"} bg={"royalblue"}>
        main
      </GridItem>
    </Grid>
  );
};
