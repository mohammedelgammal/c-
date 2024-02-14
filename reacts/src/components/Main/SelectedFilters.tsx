import { Flex, Select } from "@chakra-ui/react";
import { platforms, orderings } from "./data";
import { Filters } from "../../App";

interface SelectedFiltersProps {
  setFilters: React.Dispatch<React.SetStateAction<Filters>>;
}

export default ({ setFilters }: SelectedFiltersProps): JSX.Element => {
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
        onChange={platformChangeHandler}
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
      <Select onChange={handleOrderChange} w="fit-content" variant="filled">
        {orderings.map((order) => {
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
