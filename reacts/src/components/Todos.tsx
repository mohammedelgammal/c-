import {
  Alert,
  List,
  ListIcon,
  ListItem,
  Spinner,
  Stack,
  Text,
} from "@chakra-ui/react";
import { MdCheckCircle, MdError } from "react-icons/md";
import useTodos from "../hooks/useTodos";

export default (): JSX.Element => {
  const { data: todos, isLoading, error } = useTodos();
  return (
    <Stack>
      <Text fontSize="3xl" as="h1">
        Todos:
      </Text>
      <List spacing={3}>
        {isLoading && <Spinner />}
        {error && <Alert status="error">{error.message}</Alert>}
        {todos?.map(({ id, title, completed }) => (
          <ListItem key={id}>
            <ListIcon
              as={completed ? MdCheckCircle : MdError}
              color={completed ? "green.500" : "red.500"}
            />
            {title}
          </ListItem>
        ))}
      </List>
    </Stack>
  );
};
