import { Spinner } from "@chakra-ui/react";
import ErrorMessage from "./ErrorMessage";
import NoData from "./NoData";
import { ResponseHandler } from "../types";

export default ({
  error,
  isLoading,
  loaderComponent = <Spinner />,
  errorComponent = <ErrorMessage error={error} />,
  dataLength,
  children,
}: ResponseHandler): JSX.Element => {
  if (error && error !== "canceled") return errorComponent;
  if (!dataLength) return <NoData />;
  return <>{isLoading ? loaderComponent : children}</>;
};
