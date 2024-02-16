import ApiClient, { Response } from "./apiClient";

export interface Trailer {
  id: number;
  name: string;
  preview: string;
}

export default new ApiClient<Response<Trailer>>("/games");
