import { useQuery } from "@tanstack/react-query";
import { GAMES_QUERY_KEY } from "../constants";
import gamesServices, { Game } from "../services/gamesServices";
import { Response } from "../services/apiClient";
import ms from "ms";

export default () =>
  useQuery<Response<Game>, Error>({
    queryKey: GAMES_QUERY_KEY,
    queryFn: gamesServices.getAll,
    staleTime: ms("2h"),
  });
