import { AxiosError } from "axios";
import { useEffect, useState } from "react";
import { GameProps, GamesHook, Genre } from "../types";
import createService from "./HttpService";

export default (genre: Genre): GamesHook => {
  const [games, setGames] = useState<GameProps[]>([]);
  const [isLoading, setLoading] = useState<boolean>(true);
  const [error, setError] = useState<string>("");

  useEffect((): (() => void) => {
    const { request, cancel } = createService("/games").getAll<{
      results: GameProps[];
    }>({ genres: genre.slug as string });
    request
      .then(
        (response) => setGames(response.data.results),
        (error: AxiosError) => setError(error.message)
      )
      .then(() => setLoading(false));
    return cancel;
  }, [genre]);
  return { games, isLoading, error };
};
