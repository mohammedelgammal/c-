import {
  UseMutationResult,
  useMutation,
  useQueryClient,
} from "@tanstack/react-query";
import todoService, { Todo } from "../services/todoService";
import { TODO_QUERY_KEY } from "../constants";

export default (
  onAdd: () => void
): UseMutationResult<Todo, Error, Todo, Todo[]> => {
  const queryClient = useQueryClient();
  return useMutation<Todo, Error, Todo, Todo[]>({
    mutationKey: TODO_QUERY_KEY,
    mutationFn: todoService.post,
    onMutate: (newTodo) => {
      const previousTodos = queryClient.getQueryData<Todo[]>(TODO_QUERY_KEY);
      queryClient.setQueryData<Todo[]>(TODO_QUERY_KEY, (todos = []) => [
        newTodo,
        ...todos,
      ]),
        onAdd();
      return previousTodos;
    },
    onSuccess: (savedTodo, newTodo) => {
      queryClient.setQueryData<Todo[]>(TODO_QUERY_KEY, (todos) =>
        todos?.map((todo) => (todo === newTodo ? savedTodo : todo))
      );
    },
    onError: (...[, , previousContext]) =>
      queryClient.setQueryData<Todo[]>(TODO_QUERY_KEY, previousContext),
  });
};
