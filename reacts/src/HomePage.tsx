import { Button, Stack, Text } from "@chakra-ui/react";
import { useNavigate } from "react-router-dom";

export default (): JSX.Element => {
  const navigate = useNavigate();
  return (
    <Stack>
      <Text> HomePage</Text>
      <Button onClick={() => navigate("/contact")}>Go to Contact</Button>
    </Stack>
  );
};
