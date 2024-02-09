import { Spinner } from "@chakra-ui/react";
import ErrorMessage from "./ErrorMessage";
import { ResponseHandler } from "../types";

export default ({
  error,
  isLoading,
  loaderComponent = <Spinner />,
  errorComponent = <ErrorMessage error={error} />,
  children,
}: ResponseHandler): JSX.Element => {
  if (error) return errorComponent;
  return <>{isLoading ? loaderComponent : children}</>;
};
