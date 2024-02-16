import { GridItem } from "@chakra-ui/react";
import { useParams } from "react-router-dom";
import GameInfo from "./GameInfo";
import GameScreenshots from "./GameScreenshots";

export default (): JSX.Element => {
  const params = useParams();

  return (
    <GridItem area="aside">
      <GameInfo id={params.id} />
      <GameScreenshots id={params.id} />
    </GridItem>
  );
};
