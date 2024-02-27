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
      for (let i = 1; i < graph.length; i++) {
        const current: number = graph[i];
        let j = i - 1;
        for (; j >= 0 && graph[j] > current; j--) graph[j + 1] = graph[j];
        graph[j + 1] = current;
        await new Promise((resolve) => setTimeout(resolve, 100));
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
        Insertion Sort
      </Text>
    </Stack>
  );
};
