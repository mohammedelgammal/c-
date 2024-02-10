import { useState } from "react";
import _ from "lodash";
import useTodos from "../services/useTodos";
import { Button, List, ListIcon, ListItem, Spinner } from "@chakra-ui/react";
import { MdCheckCircle, MdError } from "react-icons/md";

interface Todo {
  id: 1;
  title: string;
  completed: boolean;
}

export default (): JSX.Element => {
  const maxPageSize = 10;
  const [page, setPage] = useState<number>(1);
  const {
    data: todos,
    isLoading,
    error,
  } = useTodos({ page, pageSize: maxPageSize });
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
      <p>Page number: {page}</p>
      <Button
        isDisabled={page === 1}
        onClick={() => setPage((page) => page - 1)}
      >
        Prev
      </Button>
      {_.range(page - 2, page + 2).map(
        (pageNum) =>
          pageNum <= 20 &&
          pageNum >= 1 && (
            <Button
              isActive={page === pageNum}
              onClick={() => setPage(pageNum)}
            >
              {pageNum}
            </Button>
          )
      )}
      <Button
        isDisabled={page === 20}
        onClick={() => setPage((page) => page + 1)}
      >
        Next
      </Button>
    </List>
  );
};

export { type Todo };
