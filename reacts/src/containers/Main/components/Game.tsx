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
  Badge,
} from "@chakra-ui/react";
import { iconsMap } from "./data";
import { GameProps } from "../../../types";

export default ({
  name,
  background_image,
  added,
  platforms,
  rating,
  released,
  genres,
}: GameProps): JSX.Element => {
  return (
    <Card borderRadius={"20px"}>
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
          <Flex justifyContent="space-between">
            <Wrap>
              {platforms.map(({ platform: { slug } }) => (
                <Icon color="gray.500" key={slug} as={iconsMap[slug]} />
              ))}
            </Wrap>
            <Tag borderRadius="full" variant="solid" colorScheme="green">
              {added}
            </Tag>
          </Flex>
          <Text fontSize="3xl" fontWeight="bold">
            {name}
            <Badge ml="1" colorScheme="green">
              {rating}
            </Badge>
          </Text>
          <Flex justifyContent="space-between">
            <Text color="GrayText">Release data: </Text>
            <Text color="GrayText">{released}</Text>
          </Flex>
          <Wrap>
            {genres.map(({ name }, index) => (
              <Badge key={index} variant="subtle" colorScheme="blue">
                {name}
              </Badge>
            ))}
          </Wrap>
        </Stack>
      </CardFooter>
    </Card>
  );
};
