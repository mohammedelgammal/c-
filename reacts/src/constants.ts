import { Filters } from "./App";

export const GENRES_QUERY_KEY = ["genres"];
export const GAMES_QUERY_KEY = (filters: Filters) => ["games", { filters }];
