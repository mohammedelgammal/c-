import { Stack, Text } from "@chakra-ui/react";
import { Link, isRouteErrorResponse, useRouteError } from "react-router-dom";

export default (): JSX.Element => {
  const error = useRouteError() as Error;
  const isRouteError = isRouteErrorResponse(error);

  return (
    <Stack>
      <Text fontSize="2xl">Ooops</Text>
      <Text fontSize="2xl">
        {isRouteError ? "Are you lost" : "Unexpected error: " + error.message}
      </Text>
      {isRouteError && <Link to="">Go Home</Link>}
    </Stack>
  );
};
