import ms from "ms";
import { useInfiniteQuery } from "@tanstack/react-query";
import gamesServices, { Game } from "../services/gamesServices";
import { Response } from "../services/apiClient";
import { Filters } from "../App";
import { GAMES_QUERY_KEY } from "../constants";

const cleanUpFilters = (filters: Filters): Filters => {
  for (const key of Object.keys(filters))
    if (!filters[key as keyof Filters]) delete filters[key as keyof Filters];
  return filters;
};

export default (filters: Filters) =>
  useInfiniteQuery<Response<Game>, Error>({
    queryKey: GAMES_QUERY_KEY(filters),
    queryFn: ({ pageParam }) =>
      gamesServices.getAll({
        params: {
          page: pageParam,
          page_size: 10,
          ...cleanUpFilters(filters),
        },
      }),
    staleTime: ms("2h"),
    getNextPageParam: (lastPage, allPages) =>
      lastPage.next ? allPages.length + 1 : undefined,
  });
