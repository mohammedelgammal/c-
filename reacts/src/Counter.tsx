import { useReducer } from "react";
import counterReducer from "./reducers/counterReducer";
import { PlusSquareIcon } from "@chakra-ui/icons";
import { Button, Flex, Text } from "@chakra-ui/react";
import { FaMinusSquare } from "react-icons/fa";

export default (): JSX.Element => {
  const [counter, dispatch] = useReducer(counterReducer, 0);
  return (
    <Flex alignItems="center" gap={5}>
      <Text>Counter: {counter}</Text>
      <Button onClick={() => dispatch({ type: "INCREMENT" })}>
        <PlusSquareIcon />
      </Button>
      <Button
        isDisabled={!counter}
        onClick={() => dispatch({ type: "DECREMENT" })}
      >
        <FaMinusSquare />
      </Button>
    </Flex>
  );
};
