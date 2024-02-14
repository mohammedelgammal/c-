import { PlusSquareIcon } from "@chakra-ui/icons";
import { Button, Flex, Text } from "@chakra-ui/react";
import { useReducer } from "react";
import { FaMinusSquare } from "react-icons/fa";

export default (): JSX.Element => {
  const counterReducer = (
    counter: number,
    action: { type: "INCREMENT" | "DECREMENT" }
  ): number => {
    if (action.type === "INCREMENT") return counter + 1;
    if (action.type === "DECREMENT") return counter ? counter - 1 : counter;
    return counter;
  };
  const [counter, dispatch] = useReducer(counterReducer, 0);
  return (
    <Flex alignItems="center" gap={5}>
      <Text>Counter: {counter}</Text>
      <Button onClick={() => dispatch({ type: "INCREMENT" })}>
        <PlusSquareIcon />
      </Button>
      <Button onClick={() => dispatch({ type: "DECREMENT" })}>
        <FaMinusSquare />
      </Button>
    </Flex>
  );
};
