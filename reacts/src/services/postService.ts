import ApiClient from "./apiClient";

export interface Post {
  userId: number;
  id: number;
  title: string;
  body: string;
}

export default new ApiClient<Post>("/posts");
