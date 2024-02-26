import { Box, Flex, Stack, Text } from "@chakra-ui/react";
import _ from "lodash";
import { useEffect, useState } from "react";

export default (): JSX.Element => {
  const createRandom = () => {
    const example: number[] = [];
    for (let i = 0; i < 50; i++) example.push(_.random(1, 500, false));
    return example;
  };
  const [graph, setGraph] = useState<number[]>(createRandom());

  const swap = (j: number, array: number[]): number[] => {
    const temp: number = array[j - 1];
    array[j - 1] = array[j];
    array[j] = temp;
    return array;
  };

  useEffect(() => {
    (async () => {
      for (let i = 0; i < graph.length; i++)
        for (let j = 1; j < graph.length; j++) {
          await new Promise((resolve) => setTimeout(resolve, 50));
          if (graph[j] < graph[j - 1]) setGraph([...swap(j, graph)]);
        }
    })();
  }, []);

  return (
    <Stack spacing={10}>
      <Flex gap={1} alignItems="end" justifyContent="center">
        {graph.map((col, index) => (
          <Box key={index} width={5} height={col + "px"} bg="red" />
        ))}
      </Flex>
      <Text fontSize="2xl" fontWeight="bold" textAlign="center">
        Bubble Sort
      </Text>
    </Stack>
  );
};
