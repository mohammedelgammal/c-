import { Stack, Text } from "@chakra-ui/react";
import { useParams } from "react-router-dom";

export default (): JSX.Element => {
  const params = useParams();
  console.log(params);
  return (
    <Stack>
      <Text>User {params.id}</Text>
    </Stack>
  );
};
