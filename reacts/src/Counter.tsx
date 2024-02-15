import { PlusSquareIcon } from "@chakra-ui/icons";
import { Button, Flex, Stack, Text } from "@chakra-ui/react";
import { FaMinusSquare } from "react-icons/fa";
import useStore from "./store";

export default (): JSX.Element => {
  const { counter, increment, decrement, reset, tasks } = useStore();
  return (
    <Stack spacing={10}>
      <Flex alignItems="center" gap={5}>
        <Text>Counter: {counter}</Text>
        <Button onClick={increment}>
          <PlusSquareIcon />
        </Button>
        <Button isDisabled={!counter} onClick={decrement}>
          <FaMinusSquare />
        </Button>
        <Button onClick={reset}>Reset counter</Button>
      </Flex>
      <Text>Showing: {tasks.length} tasks</Text>
    </Stack>
  );
};
