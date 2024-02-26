import { Stack } from "@chakra-ui/react";
import BubbleSort from "./BubbleSort";
import SelectionSort from "./SelectionSort";

export default (): JSX.Element => {
  return (
    <Stack gap={20}>
      <BubbleSort />
      <SelectionSort />
    </Stack>
  );
};
