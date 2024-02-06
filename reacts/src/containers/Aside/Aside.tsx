import { Stack, Text } from "@chakra-ui/react";
import Genre from "./components/Genre";
import { AsideProps } from "../../types";

export default ({ genres }: AsideProps): JSX.Element => {
  return (
    <Stack spacing="10px">
      <Text as="h2">
        <Text fontSize="xl" fontWeight="bold">
          Genres:
        </Text>
      </Text>
      <Stack>
        {genres.map(
          ({ id, name, image_background }): JSX.Element => (
            <Genre key={id} name={name} image_background={image_background} />
          )
        )}
      </Stack>
    </Stack>
  );
};
