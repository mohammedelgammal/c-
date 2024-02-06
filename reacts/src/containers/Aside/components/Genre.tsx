import { Box, Image, Text } from "@chakra-ui/react";
import { Genre } from "../../../types";

export default ({ name, image_background }: Genre): JSX.Element => {
  return (
    <Box display="flex" alignItems="center" gap="5px">
      <Image src={image_background} w="35px" h="35px" />
      <Text
        _hover={{ textDecoration: "underline" }}
        cursor="pointer"
        color="GrayText"
      >
        {name}
      </Text>
    </Box>
  );
};
