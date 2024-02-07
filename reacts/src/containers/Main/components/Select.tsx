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
  const handleOrderChange = (e: React.ChangeEvent<HTMLSelectElement>): void => {
    setFilters((prevFilters) => ({
      ...prevFilters,
      ordering: e.target.value,
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
      <Select
        onChange={(e) => handleOrderChange(e)}
        w="fit-content"
        variant="filled"
      >
        {order.map((order) => {
          return (
            <option key={order.slug} value={order.slug}>
              Order by: {order.name}
            </option>
          );
        })}
      </Select>
    </Flex>
  );
};
