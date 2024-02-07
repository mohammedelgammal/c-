import { Stack, Text } from "@chakra-ui/react";
import { AsideLoading, Genre } from "./components";
import { AsideProps } from "../../types";
import ResponseHandler from "../../common/ResponseHandler";

export default ({
  genres,
  isLoading,
  error,
  genre,
  setFilters,
}: AsideProps): JSX.Element => {
  return (
    <Stack spacing="10px">
      <Text as="h2">
        <Text fontSize="xl" fontWeight="bold">
          Genres:
        </Text>
      </Text>
      <ResponseHandler
        error={error}
        isLoading={isLoading}
        loaderComponent={<AsideLoading length={20} />}
        dataLength={genres.length}
      >
        <Stack>
          {genres.map(
            ({ id, name, image_background }): JSX.Element => (
              <Genre
                id={id}
                key={id}
                name={name}
                image_background={image_background}
                isActive={genre.id === id}
                genres={genres}
                setFilters={setFilters}
              />
            )
          )}
        </Stack>
      </ResponseHandler>
    </Stack>
  );
};
