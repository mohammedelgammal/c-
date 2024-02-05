import {
  Box,
  Flex,
  Input,
  InputLeftElement,
  InputGroup,
  Switch,
} from "@chakra-ui/react";
import { SearchIcon } from "@chakra-ui/icons";
import Logo from "./components/Logo";
export default (): JSX.Element => {
  return (
    <Flex h="80px" alignItems="center" gap="30px">
      <Logo />
      <Box flex="auto">
        <InputGroup>
          <InputLeftElement>
            <SearchIcon color="gray.300" />
          </InputLeftElement>
          <Input variant="filled" placeholder="Search" />
        </InputGroup>
      </Box>
      <Box flex="initial">
        <Switch />
      </Box>
    </Flex>
  );
};
