import { Stack, Text, SimpleGrid } from "@chakra-ui/react";
import { MainProps } from "../../types";
import Select from "./components/Select";
import Game from "./components/Game";
import LoadingGames from "./components/LoadingGames";
import ResponseHandler from "../../common/ResponseHandler";

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
      <ResponseHandler
        error={error}
        isLoading={isLoading}
        loader={<LoadingGames length={15} />}
      >
        <SimpleGrid marginTop="30px" columns={3} spacing={10}>
          {games.map((game, index) => (
            <Game key={index} {...game} />
          ))}
        </SimpleGrid>
      </ResponseHandler>
    </Stack>
  );
};
