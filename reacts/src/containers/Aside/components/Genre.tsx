import { Box, Image, Text } from "@chakra-ui/react";

import { Genre, GenreProps } from "../../../types";

export default ({
  id = 0,
  name,
  image_background,
  isActive,
  genres,
  setFilters,
}: GenreProps): JSX.Element => {
  const handleGenre = (id: number): void => {
    const genre: Genre = genres.filter((genre) => genre.id === id)[0];
    setFilters((filters) => ({
      ...filters,
      genres: genre,
    }));
  };
  return (
    <Box display="flex" alignItems="center" gap="10px">
      <Image src={image_background} w="32px" h="32px" borderRadius="5px" />
      <Text
        fontWeight={isActive ? "bold" : ""}
        _hover={{ textDecoration: "underline" }}
        cursor="pointer"
        color="darkgray"
        onClick={() => handleGenre(id)}
      >
        {name}
      </Text>
    </Box>
  );
};
