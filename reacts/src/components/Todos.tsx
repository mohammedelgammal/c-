import { AxiosError } from "axios";
import { List, ListIcon, ListItem, Spinner } from "@chakra-ui/react";
import { MdCheckCircle, MdError } from "react-icons/md";

interface Todo {
  id: 1;
  title: string;
  completed: boolean;
}

interface TodoProps {
  todos: Todo[] | undefined;
  isLoading: boolean;
  error: AxiosError | null;
}

export default ({ todos, isLoading, error }: TodoProps): JSX.Element => {
  return (
    <List spacing={3}>
      {isLoading && <Spinner />}
      {error && <p>{error.message}</p>}
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
  );
};

export { type Todo };
