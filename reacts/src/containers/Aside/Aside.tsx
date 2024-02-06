import { Stack, Text } from "@chakra-ui/react";
import { AsideLoading, Genre } from "./components";
import ErrorMessage from "../../common/ErrorMessage";
import { AsideProps } from "../../types";

export default ({ genres, isLoading, error }: AsideProps): JSX.Element => {
  return (
    <Stack spacing="10px">
      <Text as="h2">
        <Text fontSize="xl" fontWeight="bold">
          Genres:
        </Text>
      </Text>
      {isLoading ? (
        <AsideLoading length={20} />
      ) : error ? (
        <ErrorMessage error={error} />
      ) : (
        <Stack>
          {genres.map(
            ({ id, name, image_background }): JSX.Element => (
              <Genre key={id} name={name} image_background={image_background} />
            )
          )}
        </Stack>
      )}
    </Stack>
  );
};
