import { useInfiniteQuery } from "@tanstack/react-query";
import { GAMES_QUERY_KEY } from "../constants";
import gamesServices, { Game } from "../services/gamesServices";
import { Response } from "../services/apiClient";
import ms from "ms";

export default () =>
  useInfiniteQuery<Response<Game>, Error>({
    queryKey: GAMES_QUERY_KEY,
    queryFn: ({ pageParam }) =>
      gamesServices.getAll({
        params: {
          page: pageParam,
          page_size: 6,
        },
      }),
    staleTime: ms("2h"),
  });
