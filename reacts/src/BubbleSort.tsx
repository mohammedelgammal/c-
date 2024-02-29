import { Box, Flex, Stack, Text } from "@chakra-ui/react";
import useSort from "./hooks/useSort";

export default (): JSX.Element => {
  const [graph, selected, isFinished] = useSort();
  return (
    <Stack spacing={10}>
      <Flex alignItems="end" justifyContent="center">
        {graph.map((col, index) => (
          <Box
            key={index}
            width={5}
            height={col + "px"}
            bg={selected === index ? "white" : isFinished ? "yellow" : "gray"}
          />
        ))}
      </Flex>
      <Text fontSize="2xl" fontWeight="bold" textAlign="center">
        Bubble Sort
      </Text>
    </Stack>
  );
};
