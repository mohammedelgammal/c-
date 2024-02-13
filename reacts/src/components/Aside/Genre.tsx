import { Flex, Image, Text } from "@chakra-ui/react";

interface GenreProps {
  id: number;
  src: string;
  title: string;
}

export default ({ src, title }: GenreProps): JSX.Element => {
  return (
    <Flex gap={3} alignItems="center">
      <Image src={src} borderRadius="10px" w={8} h={8} />
      <Text
        as="span"
        textAlign="left"
        _hover={{
          textDecoration: "underline",
          cursor: "pointer",
        }}
      >
        {title}
      </Text>
    </Flex>
  );
};
