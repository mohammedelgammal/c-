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
import { GameProps } from "../../../types";

export default ({
  name,
  background_image,
  added,
  platforms,
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
                <Icon color="gray.500" key={slug} as={iconsMap[slug]}></Icon>
              ))}
            </Wrap>
            <Tag>{added}</Tag>
          </Flex>
          <Text>{name}</Text>
        </Stack>
      </CardFooter>
    </Card>
  );
};
