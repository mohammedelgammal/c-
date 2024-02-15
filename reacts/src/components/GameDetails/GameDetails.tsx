import { Text } from "@chakra-ui/react";
import { useParams } from "react-router-dom";

export default (): JSX.Element => {
  const params = useParams();
  return <Text>Game detail {params.id}</Text>;
};
