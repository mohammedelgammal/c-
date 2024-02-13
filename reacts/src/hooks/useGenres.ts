import { useQuery } from "@tanstack/react-query";
import genresService, { Genre } from "../services/genresService";
import { GENRES_QUERY_KEY } from "../constants";
import { Response } from "../services/apiClient";

export default () =>
  useQuery<Response<Genre>, Error>({
    queryKey: GENRES_QUERY_KEY,
    queryFn: genresService.getAll,
    staleTime: 10 * 60 * 1000, // 10min
    retry: 3,
  });
