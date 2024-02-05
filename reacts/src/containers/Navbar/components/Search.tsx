import { Box, InputGroup, Input, InputLeftElement } from "@chakra-ui/react";
import { SearchIcon } from "@chakra-ui/icons";

export default (): JSX.Element => {
  const handleSearchChange = (e: React.ChangeEvent<HTMLInputElement>): void => {
    console.log(e.target.value);
  };
  return (
    <Box flex="auto">
      <InputGroup>
        <InputLeftElement>
          <SearchIcon color="gray.300" />
        </InputLeftElement>
        <Input
          borderRadius="50px"
          onChange={(e) => handleSearchChange(e)}
          variant="filled"
          placeholder="Search"
        />
      </InputGroup>
    </Box>
  );
};
