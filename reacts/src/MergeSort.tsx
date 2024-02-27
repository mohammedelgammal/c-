import { Box, Flex, Stack, Text } from "@chakra-ui/react";
import { useEffect, useState } from "react";

export default (): JSX.Element => {
  const createRandom = () => {
    const example: number[] = Array.from({ length: 50 }, () =>
      Math.round(Math.random() * 500)
    );
    console.log(example);
    return example;
  };

  const [graph, setGraph] = useState<number[]>(createRandom());

  const merge = async (left: number[], right: number[], result: number[]) => {
    let i = 0,
      j = 0,
      k = 0;
    while (i < left.length && j < right.length)
      if (left[i] <= right[j]) result[k++] = left[i++];
      else result[k++] = right[j++];
    await new Promise(() =>
      setTimeout(() => {
        setGraph([...result]);
      }, 1)
    );
    while (i < left.length) result[k++] = left[i++];
    while (j < right.length) result[k++] = right[j++];
  };

  const sort = (array: number[]) => {
    if (array.length < 2) return array;

    const middle = Math.floor(array.length / 2);
    const left = array.slice(0, middle);
    const right = array.slice(middle);

    sort(left);
    sort(right);

    merge(left, right, array);

    return array;
  };

  useEffect(() => {
    console.log(graph);
    setGraph([...sort(graph)]);
    console.log(graph);
  }, []);

  return (
    <Stack spacing={10}>
      <Flex gap={1} alignItems="end" justifyContent="center">
        {graph.map((col, index) => (
          <Box key={index} width={5} height={col + "px"} bg="red" />
        ))}
      </Flex>
      <Text
        // onClick={handleClick}
        fontSize="2xl"
        fontWeight="bold"
        textAlign="center"
      >
        Merge Sort
      </Text>
    </Stack>
  );
};
