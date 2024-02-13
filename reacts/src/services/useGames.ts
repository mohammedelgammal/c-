import { Filters, GameProps } from "../types";
import useData from "./useData";

interface UseGames {
  games: GameProps[];
  isGamesLoading: boolean;
  gamesError: string;
}

export default (filters: Filters): UseGames => {
  const {
    data: games,
    isLoading: isGamesLoading,
    error: gamesError,
  } = useData<GameProps>(
    "/games",
    {
      params: {
        genres: filters.genres.slug,
        platforms: filters.platforms,
        ordering: filters.ordering,
        search: filters.search,
      },
    },
    [filters]
  );
  return { games, isGamesLoading, gamesError };
};
