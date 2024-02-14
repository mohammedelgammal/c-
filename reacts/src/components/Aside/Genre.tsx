import { Flex, Image, Text } from "@chakra-ui/react";
import useCropImage from "../../services/useCropImage";
import { Filters } from "../../App";

interface GenreProps {
  src: string;
  title: string;
  slug: string;
  setFilters: React.Dispatch<React.SetStateAction<Filters>>;
  selectedGenre: string;
}

export default ({
  src,
  title,
  slug,
  setFilters,
  selectedGenre,
}: GenreProps): JSX.Element => {
  return (
    <Flex gap={3} alignItems="center">
      <Image src={useCropImage(src)} borderRadius="10px" w={8} h={8} />
      <Text
        as="span"
        textAlign="left"
        _hover={{
          textDecoration: "underline",
          cursor: "pointer",
        }}
        onClick={() =>
          setFilters((filters) => ({
            ...filters,
            genres: slug,
          }))
        }
        fontWeight={selectedGenre === slug ? "bold" : ""}
      >
        {title}
      </Text>
    </Flex>
  );
};
