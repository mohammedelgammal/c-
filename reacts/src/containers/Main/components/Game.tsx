import {
  Card,
  CardBody,
  CardFooter,
  Image,
  Stack,
  Flex,
  HStack,
  Tag,
  Text,
} from "@chakra-ui/react";
import { GameProps } from "../../../types";

export default ({ src, platforms, rating, title }: GameProps): JSX.Element => {
  return (
    <Card borderRadius={"20px"}>
      <CardBody p={0}>
        <Image w={"100%"} h={200} src={src} borderRadius="20px 20px 0 0" />
      </CardBody>
      <CardFooter>
        <Stack width="100%">
          <Flex justifyContent="space-between">
            <HStack>
              {platforms.map((platform) => (
                <Image src={platform} />
              ))}
            </HStack>
            <Tag>{rating}</Tag>
          </Flex>
          <Text>{title}</Text>
        </Stack>
      </CardFooter>
    </Card>
  );
};
