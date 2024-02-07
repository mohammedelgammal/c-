import { Flex, Select } from "@chakra-ui/react";
import { platforms, order } from "./data";
import { SelectProps } from "../../../types";

export default ({ setFilters }: SelectProps): JSX.Element => {
  const platformChangeHandler = (
    e: React.ChangeEvent<HTMLSelectElement>
  ): void => {
    setFilters((prevFilters) => ({
      ...prevFilters,
      platforms: e.target.value,
    }));
  };
  return (
    <Flex gap="20px">
      <Select
        onChange={(e) => platformChangeHandler(e)}
        w="fit-content"
        variant="filled"
        placeholder="Platforms"
      >
        {platforms.map((platform, index) => {
          return (
            <option key={index} value={platform.id}>
              {platform.name}
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
