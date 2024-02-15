import { Button, Stack, Text } from "@chakra-ui/react";
import { useNavigate } from "react-router-dom";

export default (): JSX.Element => {
  const navigate = useNavigate();
  throw new Error("main page error");
  return (
    <Stack>
      <Text> HomePage</Text>
      <Button onClick={() => navigate("/contact")}>Go to Contact</Button>
    </Stack>
  );
};
