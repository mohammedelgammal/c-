import { Alert, SimpleGrid, Spinner, Stack, Text } from "@chakra-ui/react";
import InfoBox from "./InfoBox";
import useGameDetails from "../../hooks/useGameDetails";

interface GameInfoProps {
  id: string | undefined;
}

export default ({ id = "" }: GameInfoProps): JSX.Element => {
  const { data: gameDetails, isLoading, error } = useGameDetails(parseInt(id));
  return (
    <SimpleGrid>
      {isLoading && <Spinner />}
      {error?.message ? <Alert>{error.message}</Alert> : null}
      <Stack>
        <Text fontSize="2xl">{gameDetails?.name}</Text>
        {gameDetails?.description}
        <SimpleGrid columns={2}>
          <InfoBox
            title="Platforms"
            list={
              gameDetails?.platforms.map(({ platform }) => platform.name) || []
            }
          />
          <InfoBox
            title="Metascore"
            list={[gameDetails?.metacritic.toString() || ""]}
          />
          <InfoBox
            title="Genres"
            list={gameDetails?.genres.map((genre) => genre.name) || []}
          />
          <InfoBox
            title="Publishers"
            list={
              gameDetails?.publishers.map((publisher) => publisher.name) || []
            }
          />
        </SimpleGrid>
      </Stack>
    </SimpleGrid>
  );
};
