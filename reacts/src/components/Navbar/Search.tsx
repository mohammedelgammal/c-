import { Box, InputGroup, Input, InputLeftElement } from "@chakra-ui/react";
import { SearchIcon } from "@chakra-ui/icons";
import { Filters } from "../../App";

interface SearchProps {
  setFilters: React.Dispatch<React.SetStateAction<Filters>>;
  filters: Filters;
}

export default ({ setFilters, filters }: SearchProps): JSX.Element => {
  const handleSearchChange = (e: React.ChangeEvent<HTMLInputElement>): void => {
    setFilters((prevFilters) => ({
      ...prevFilters,
      search: e.target.value,
    }));
  };
  return (
    <Box flex="auto">
      <InputGroup>
        <InputLeftElement>
          <SearchIcon color="gray.300" />
        </InputLeftElement>
        <Input
          borderRadius="50px"
          onChange={handleSearchChange}
          variant="filled"
          placeholder="Search"
          value={filters.search}
        />
      </InputGroup>
    </Box>
  );
};
