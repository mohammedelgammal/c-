import { AxiosError } from "axios";
import { useEffect, useState } from "react";
import { Filters, GameProps, GamesHook } from "../types";
import createService from "./HttpService";

export default ({ genres, platforms, ordering }: Filters): GamesHook => {
  const [games, setGames] = useState<GameProps[]>([]);
  const [isLoading, setLoading] = useState<boolean>(true);
  const [error, setError] = useState<string>("");

  useEffect((): (() => void) => {
    const { request, cancel } = createService("/gamess").getAll<{
      results: GameProps[];
    }>({
      ...(genres.slug ? { genres: genres.slug } : {}),
      ...(platforms ? { platforms } : {}),
      ...(ordering ? { ordering } : {}),
    });
    request
      .then(
        (response) => setGames(response.data.results),
        (error: AxiosError) => setError(error.message)
      )
      .then(() => setLoading(false));
    return cancel;
  }, [genres, platforms, ordering]);
  return { games, isLoading, error };
};
