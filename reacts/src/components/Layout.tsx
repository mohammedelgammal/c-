import { Grid } from "@chakra-ui/react";

export default ({ children }: { children: React.ReactNode }): JSX.Element => {
  return (
    <Grid
      gridTemplateAreas={{
        lg: `"nav nav"
             "aside main"`,
        sm: `"nav nav"
             "main main"`,
      }}
      gridTemplateColumns={{
        lg: "250px 1fr",
        sm: "1fr",
      }}
      gridTemplateRows={"100px 1fr"}
      maxW="1440px"
      px={5}
    >
      {children}
    </Grid>
  );
};
