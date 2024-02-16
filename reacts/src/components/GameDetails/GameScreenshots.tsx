import { Grid, GridItem, Image, Spinner } from "@chakra-ui/react";
import useScreenshots from "../../hooks/useScreenshots";

interface GameScreenshotsProps {
  id: string | undefined;
}

export default ({ id = "" }: GameScreenshotsProps): JSX.Element => {
  const { data: screenshots, isLoading, error } = useScreenshots(parseInt(id));

  return (
    <Grid templateColumns="repeat(5, 1fr)" gap={6}>
      {isLoading && <Spinner />}
      {error?.message ? error.message : null}
      {screenshots?.results.map(({ id, image, width, height }) => (
        <GridItem key={id}>
          <Image src={image} w={width} h={height} />
        </GridItem>
      ))}
    </Grid>
  );
};
