import ErrorMessage from "./ErrorMessage";

export default ({
  error,
  isLoading,
  loader,
  children,
}: {
  error: string;
  isLoading: boolean;
  loader: JSX.Element;
  children: JSX.Element;
}): JSX.Element => {
  if (error && error !== "canceled") return <ErrorMessage error={error} />;
  return <>{isLoading ? loader : children}</>;
};
