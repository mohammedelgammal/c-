import { Box, GridItem, Image, SimpleGrid } from "@chakra-ui/react";
import useScreenshots from "../../hooks/useScreenshots";
import GameScreenshotsLoading from "./GameScreenshotsLoading";

interface GameScreenshotsProps {
  id: string | undefined;
}

export default ({ id = "" }: GameScreenshotsProps): JSX.Element => {
  const { data: screenshots, isLoading, error } = useScreenshots(parseInt(id));

  return (
    <Box>
      {isLoading && <GameScreenshotsLoading />}
      {error?.message ? error.message : null}
      <SimpleGrid
        columns={{
          base: 1,
          md: 2,
        }}
        gap={5}
      >
        {screenshots?.results.map(({ id, image }) => (
          <GridItem key={id}>
            <Image src={image} />
          </GridItem>
        ))}
      </SimpleGrid>
    </Box>
  );
};
