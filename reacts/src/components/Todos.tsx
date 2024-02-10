import _ from "lodash";
import useTodos from "../services/useTodos";
import { Button, List, ListIcon, ListItem, Spinner } from "@chakra-ui/react";
import { MdCheckCircle, MdError } from "react-icons/md";
import React from "react";

interface Todo {
  id: 1;
  title: string;
  completed: boolean;
}

export default (): JSX.Element => {
  const maxPageSize = 10;
  const {
    data: todos,
    isLoading,
    error,
    isFetchingNextPage,
    fetchNextPage,
  } = useTodos({ pageSize: maxPageSize });
  return (
    <List spacing={3}>
      {isLoading && <Spinner />}
      {error && <p>{error.message}</p>}
      {todos?.pages.map((page, index) => (
        <React.Fragment key={index}>
          {page.map(({ id, title, completed }) => (
            <ListItem key={id}>
              <ListIcon
                as={completed ? MdCheckCircle : MdError}
                color={completed ? "green.500" : "red.500"}
              />
              {title}
            </ListItem>
          ))}
        </React.Fragment>
      ))}

      <Button isDisabled={isFetchingNextPage} onClick={() => fetchNextPage()}>
        {isFetchingNextPage ? "loading..." : "Load more"}
      </Button>
    </List>
  );
};

export { type Todo };
