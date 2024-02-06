import { Box, Image, Text } from "@chakra-ui/react";

import { Genre } from "../../../types";

export default ({ name, image_background }: Genre): JSX.Element => {
  return (
    <Box display="flex" alignItems="center" gap="10px">
      <Image src={image_background} w="32px" h="32px" borderRadius="5px" />
      <Text
        _hover={{ textDecoration: "underline" }}
        cursor="pointer"
        color="darkgray"
      >
        {name}
      </Text>
    </Box>
  );
};
