import { Button, Flex, Select } from "@chakra-ui/react";
import { platforms, orderings } from "./data";
import { Filters } from "../../App";
import { CiFilter } from "react-icons/ci";

interface SelectedFiltersProps {
  setFilters: React.Dispatch<React.SetStateAction<Filters>>;
  filters: Filters;
}

export default ({ setFilters, filters }: SelectedFiltersProps): JSX.Element => {
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
  const handleResetFilters = (): void => {
    setFilters({
      genres: "",
      platforms: "",
      ordering: "",
      search: "",
    });
  };
  return (
    <Flex gap="20px">
      <Select
        onChange={platformChangeHandler}
        w="fit-content"
        variant="filled"
        placeholder="Platforms"
        value={filters.platforms}
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
        onChange={handleOrderChange}
        w="fit-content"
        variant="filled"
        value={filters.ordering}
      >
        {orderings.map((order) => {
          return (
            <option key={order.slug} value={order.slug}>
              Order by: {order.name}
            </option>
          );
        })}
      </Select>
      <Button onClick={handleResetFilters}>
        Reset filters &nbsp; <CiFilter />
      </Button>
    </Flex>
  );
};
