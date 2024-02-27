import { Stack } from "@chakra-ui/react";
import BubbleSort from "./BubbleSort";
import SelectionSort from "./SelectionSort";
import InsertionSort from "./InsertionSort";

export default (): JSX.Element => {
  return (
    <Stack gap={20}>
      <BubbleSort />
      <SelectionSort />
      <InsertionSort />
    </Stack>
  );
};
