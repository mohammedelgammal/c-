import {
  Card,
  CardBody,
  CardFooter,
  Image,
  Stack,
  Flex,
  Tag,
  Text,
  Icon,
  Wrap,
} from "@chakra-ui/react";
import { iconsMap } from "./data";
import { Game } from "../../services/gamesServices";
import _ from "lodash";
import Emoji from "./Emoji";

export default ({
  name,
  rating,
  rating_top,
  background_image,
  released,
  added,
  tba,
}: Game): JSX.Element => {
  return (
    <Card
      variant="elevated"
      borderRadius={"20px"}
      colorScheme={tba ? "whiteAlpha" : "blackAlpha"}
    >
      <CardBody p={0}>
        <Image
          w={"100%"}
          h={200}
          src={background_image}
          borderRadius="20px 20px 0 0"
        />
      </CardBody>
      <CardFooter>
        <Stack width="100%">
          <Wrap justifyContent="space-between">
            <Wrap>
              {_.range(0, _.random(0, iconsMap.length)).map((icon, index) => (
                <Icon color="gray.500" key={index} as={iconsMap[icon]} />
              ))}
            </Wrap>
            <Tag borderRadius="full" variant="solid" colorScheme="green">
              {added}
            </Tag>
            <Tag borderRadius="full" variant="outline" colorScheme="blue">
              {rating}
            </Tag>
          </Wrap>
          <Text fontSize="3xl" fontWeight="bold">
            {name}
            <Emoji rating={rating_top} />
          </Text>
          <Flex justifyContent="space-between">
            <Text color="GrayText">Released: </Text>
            <Text color="GrayText">{released}</Text>
          </Flex>
        </Stack>
      </CardFooter>
    </Card>
  );
};
