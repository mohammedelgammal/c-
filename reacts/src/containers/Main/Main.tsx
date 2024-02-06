import { Stack, Text, SimpleGrid } from "@chakra-ui/react";
import { MainProps } from "../../types";
import Select from "./components/Select";
import Game from "./components/Game";

export default ({ categoryTitle, games }: MainProps): JSX.Element => {
  return (
    <Stack>
      <Text as="h2" fontSize="5xl" fontWeight="bold">
        {categoryTitle || "Games"}
      </Text>
      <Select />
      <SimpleGrid marginTop="30px" columns={3} spacing={10}>
        {games.map(({ platforms, rating, src, title }, index) => (
          <Game
            key={index}
            platforms={platforms}
            rating={rating}
            src={src}
            title={title}
          />
        ))}
      </SimpleGrid>
    </Stack>
  );
};
