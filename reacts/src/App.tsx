import Todos from "./components/Todos";
import useTodos from "./services/useTodos";

export default (): JSX.Element => {
  const { data: todos, isLoading, error } = useTodos();

  return <Todos todos={todos} isLoading={isLoading} error={error} />;
};
