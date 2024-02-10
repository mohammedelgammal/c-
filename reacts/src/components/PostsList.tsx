import {
  List,
  ListIcon,
  ListItem,
  Select,
  Spinner,
  Stack,
} from "@chakra-ui/react";
import usePosts from "../services/usePosts";
import { useState } from "react";
import { MdCheckCircle } from "react-icons/md";

export default (): JSX.Element => {
  const pageSize = 10;
  const [userId, setUserId] = useState<number>(0);
  const {
    data: posts,
    isLoading,
    error,
  } = usePosts({
    page: 1,
    pageSize,
    userId,
  });
  const handleUserChange = (e: React.ChangeEvent<HTMLSelectElement>): void => {
    setUserId(parseInt(e.target.value));
  };
  return (
    <Stack>
      <Select onChange={(e) => handleUserChange(e)} value={userId}>
        <option value="">Select user</option>
        <option value="1">User one</option>
        <option value="2">User two</option>
        <option value="3">User three</option>
      </Select>

      <List spacing={5}>
        {isLoading && <Spinner />}
        {error?.message && <p>{error.message}</p>}
        {posts?.map(({ id, body }) => (
          <ListItem key={id}>
            <ListIcon as={MdCheckCircle} color="green.500" />
            {body}
          </ListItem>
        ))}
      </List>
    </Stack>
  );
};
