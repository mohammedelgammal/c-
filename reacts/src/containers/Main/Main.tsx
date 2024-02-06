import { Stack, Text, SimpleGrid } from "@chakra-ui/react";
import { MainProps } from "../../types";
import Select from "./components/Select";
import Game from "./components/Game";
import ErrorMessage from "../../common/ErrorMessage";
import LoadingGames from "./components/LoadingGames";

export default ({
  categoryTitle,
  games,
  isLoading,
  error,
}: MainProps): JSX.Element => {
  return (
    <Stack>
      <Text as="h2" fontSize="5xl" fontWeight="bold">
        {categoryTitle || "Games"}
      </Text>
      <Select />
      {isLoading ? (
        <LoadingGames length={15} />
      ) : error ? (
        <ErrorMessage error={error} />
      ) : (
        <SimpleGrid marginTop="30px" columns={3} spacing={10}>
          {games.map(
            (
              {
                name,
                background_image,
                added,
                platforms,
                rating,
                released,
                genres,
              },
              index
            ) => (
              <Game
                key={index}
                name={name}
                background_image={background_image}
                added={added}
                platforms={platforms}
                released={released}
                rating={rating}
                genres={genres}
              />
            )
          )}
        </SimpleGrid>
      )}
    </Stack>
  );
};
