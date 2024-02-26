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

  useEffect(() => {
    (async () => {
      for (let i = 0; i < graph.length; i++) {
        let minIndex: number = i;
        for (let j = i; j < graph.length; j++) {
          if (graph[j] < graph[minIndex]) minIndex = j;
        }
        const temp: number = graph[i];
        graph[i] = graph[minIndex];
        graph[minIndex] = temp;
        await new Promise((resolve) => setTimeout(resolve, 1));
        setGraph([...graph]);
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
        Selection Sort
      </Text>
    </Stack>
  );
};
