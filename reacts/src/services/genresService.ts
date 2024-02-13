import ApiClient from "./apiClient";

export interface Genre {
  id: number;
  name: string;
  slug: string;
  games_count: number;
  image_background: string;
  description: string;
}

export default new ApiClient<Genre>("/genresx");
