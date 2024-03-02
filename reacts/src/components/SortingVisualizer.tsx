import { Box, Flex, Stack, Text } from "@chakra-ui/react";
import { SortingVisualizerProps } from "../entities/Sorting";

export default ({
  algorithm,
  graph,
  isFinished,
  selected,
}: SortingVisualizerProps) => (
  <Stack spacing={10}>
    <Flex alignItems="end" justifyContent="center">
      {graph.map((col, index) => (
        <Box
          key={index}
          width={5}
          height={col + "px"}
          bg={
            isFinished
              ? "green.500"
              : index === selected[0]
              ? "blue.500"
              : index === selected[1]
              ? "orange.500"
              : "gray.500"
          }
        />
      ))}
    </Flex>
    <Text fontSize="2xl" fontWeight="bold" textAlign="center">
      {algorithm}
    </Text>
  </Stack>
);
