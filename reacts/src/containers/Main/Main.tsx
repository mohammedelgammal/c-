import { Stack, Text, SimpleGrid, Spinner } from "@chakra-ui/react";
import { MainProps } from "../../types";
import Select from "./components/Select";
import Game from "./components/Game";
import ErrorMessage from "../../common/ErrorMessage";

export default ({
  categoryTitle,
  games,
  isLoading,
  error,
}: MainProps): JSX.Element => {
  return isLoading ? (
    <p>Skeleton goes here</p>
  ) : error ? (
    <ErrorMessage error={error} />
  ) : (
    <Stack>
      <Text as="h2" fontSize="5xl" fontWeight="bold">
        {categoryTitle || "Games"}
      </Text>
      <Select />
      <SimpleGrid marginTop="30px" columns={3} spacing={10}>
        {games.map(({ name, background_image, added, platforms }, index) => (
          <Game
            key={index}
            name={name}
            background_image={background_image}
            added={added}
            platforms={platforms}
          />
        ))}
      </SimpleGrid>
    </Stack>
  );
};
