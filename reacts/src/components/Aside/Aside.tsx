import { Alert, GridItem, Show, Stack, Text } from "@chakra-ui/react";
import useGenres from "../../hooks/useGenres";
import AsideLoading from "./AsideLoading";
import Genre from "./Genre";

export default (): JSX.Element => {
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
            {genres?.results?.map(({ id, name, slug, image_background }) => (
              <Genre key={id} src={image_background} title={name} slug={slug} />
            ))}
          </Stack>
        </Stack>
      </GridItem>
    </Show>
  );
};
