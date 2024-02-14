import { Alert, GridItem, Show, Stack, Text } from "@chakra-ui/react";
import Genre from "./Genre";
import useGenres from "../../hooks/useGenres";
import AsideLoading from "./AsideLoading";
import { Filters } from "../../App";

interface AsideProps {
  setFilters: React.Dispatch<React.SetStateAction<Filters>>;
  selectedGenre: string;
}

export default ({ setFilters, selectedGenre }: AsideProps): JSX.Element => {
  const { data: genres, isLoading, error } = useGenres();
  return (
    <Show above="lg">
      <GridItem area="aside">
        <Stack spacing={5}>
          <Text fontSize="2xl" fontWeight="bold" as="h2">
            Genres
          </Text>
          {isLoading && <AsideLoading length={20} />}
          {error?.message && <Alert status="error">{error.message}</Alert>}
          <Stack spacing={3}>
            {genres?.results?.map(({ id, name, image_background }) => (
              <Genre
                setFilters={setFilters}
                key={id}
                src={image_background}
                title={name}
                id={id}
                selectedGenre={selectedGenre}
              />
            ))}
          </Stack>
        </Stack>
      </GridItem>
    </Show>
  );
};
