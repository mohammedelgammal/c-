import { Button, Image, Stack, Text } from "@chakra-ui/react";
import { HiHomeModern } from "react-icons/hi2";
import {
  isRouteErrorResponse,
  useNavigate,
  useRouteError,
} from "react-router-dom";
import errorBear from "../assets/error_bear.png";
import { BiRefresh } from "react-icons/bi";

export default (): JSX.Element => {
  const navigate = useNavigate();
  const error = useRouteError() as Error;
  const isRouteError = isRouteErrorResponse(error);
  return (
    <Stack
      h={"100vh"}
      display="flex"
      alignItems="center"
      justifyContent="center"
    >
      <Image w={"300px"} h={"350px"} src={errorBear} userSelect="none" />
      <Text color="indianred" fontSize="4xl">
        Oooooops!
      </Text>
      <Text color="gray" fontSize="md">
        {isRouteError
          ? "It looks like you're lost! Make sure you hit the corecct url."
          : `Unexpected Error: ${error.message}.`}
      </Text>
      <Button
        mt={8}
        onClick={() => (isRouteError ? navigate("/") : navigate(0))}
      >
        {isRouteError ? (
          <>
            Go Home &nbsp; <HiHomeModern />
          </>
        ) : (
          <>
            Refresh &nbsp; <BiRefresh />
          </>
        )}
      </Button>
    </Stack>
  );
};
