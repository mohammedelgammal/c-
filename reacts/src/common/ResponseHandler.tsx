import { Spinner } from "@chakra-ui/react";
import ErrorMessage from "./ErrorMessage";

export default ({
  error,
  isLoading,
  loaderComponent = <Spinner />,
  errorComponent = <ErrorMessage error={error} />,
  children,
}: {
  error: string;
  isLoading: boolean;
  loaderComponent?: JSX.Element;
  errorComponent?: JSX.Element;
  children: JSX.Element;
}): JSX.Element => {
  if (error && error !== "canceled") return errorComponent;
  return <>{isLoading ? loaderComponent : children}</>;
};
