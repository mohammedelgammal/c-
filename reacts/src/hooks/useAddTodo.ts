import { useMutation, useQueryClient } from "@tanstack/react-query";
import apiClient from "../services/apiClient";

export interface Todo {
  id: 1;
  title: string;
  completed: boolean;
}

export default (onAdd: () => {}) => {
  const queryClient = useQueryClient();

  return useMutation<Todo, Error, Todo, { pages: Todo[][] | undefined }>({
    mutationFn: (newTodo: Todo) =>
      apiClient.post("/todoss", newTodo).then((res) => res.data),
    onMutate: (newTodo: Todo): { pages: Todo[][] } | undefined => {
      const previousTodos = queryClient.getQueryData<{ pages: Todo[][] }>([
        "todos",
      ]);
      queryClient.setQueryData<{ pages: Todo[][] }>(
        ["todos"],
        (currentTodos) => ({
          ...currentTodos,
          pages: [[newTodo, ...currentTodos!.pages[0]], ...currentTodos!.pages],
        })
      );
      onAdd();
      return previousTodos;
    },
    onSuccess: (savedTodo): void => {
      queryClient.setQueryData<{ pages: Todo[][] }>(
        ["todos"],
        (currentTodos) => {
          return {
            ...currentTodos,
            pages: [
              [...currentTodos!.pages[0], savedTodo],
              ...currentTodos!.pages,
            ],
          };
        }
      );
    },
    onError: (...[, , context]) => {
      if (context)
        queryClient.setQueryData<{ pages: Todo[][] | undefined }>(
          ["todos"],
          context
        );
    },
  });
};
