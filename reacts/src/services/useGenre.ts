import { useEffect, useState } from "react";
import { AxiosError } from "axios";
import { AsideProps, Genre } from "../types";
import createHttpService from "./HttpService";

export default (): AsideProps => {
  const [genres, setGenres] = useState<Genre[]>([]);
  const [isLoading, setLoading] = useState<boolean>(true);
  const [error, setError] = useState<string>("");
  useEffect(() => {
    const { request, cancel } = createHttpService("/genres").getAll<{
      results: Genre[];
    }>();
    request
      .then(
        (response) => setGenres(response.data.results),
        (error: AxiosError) => setError(error.message)
      )
      .then(() => setLoading(false));
    return cancel;
  }, []);
  return { genres, isLoading, error };
};
