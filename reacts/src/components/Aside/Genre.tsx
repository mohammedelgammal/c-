import { Flex, Image, Text } from "@chakra-ui/react";
import useCropImage from "../../services/useCropImage";
import { Filters } from "../../App";

interface GenreProps {
  id: number;
  src: string;
  title: string;
  setFilters: React.Dispatch<React.SetStateAction<Filters>>;
  selectedGenre: string;
}

export default ({
  id,
  src,
  title,
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
            genres: id.toString(),
          }))
        }
        fontWeight={selectedGenre === id.toString() ? "bold" : ""}
      >
        {title}
      </Text>
    </Flex>
  );
};
