import { Button, Stack, Text } from "@chakra-ui/react";
import { Navigate, useNavigate } from "react-router-dom";
import useAuth from "./hooks/useAuth";

export default (): JSX.Element => {
  const { isLoggedIn } = useAuth();
  if (!isLoggedIn) return <Navigate to={"/login"} />;
  const navigate = useNavigate();
  return (
    <Stack>
      <Text> HomePage</Text>
      <Button onClick={() => navigate("/contact")}>Go to Contact</Button>
    </Stack>
  );
};
