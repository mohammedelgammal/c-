import { Flex, Select } from "@chakra-ui/react";
import { platforms, order } from "./data";

export default (): JSX.Element => {
  return (
    <Flex gap="20px">
      <Select w="fit-content" variant="filled" placeholder="Platforms">
        {platforms.map((platform) => {
          return (
            <option key={platform} value={platform}>
              {platform}
            </option>
          );
        })}
      </Select>
      <Select w="fit-content" variant="filled">
        {order.map((platform) => {
          return (
            <option key={platform} value={platform}>
              Order by: {platform}
            </option>
          );
        })}
      </Select>
    </Flex>
  );
};
