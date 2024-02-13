import axios from "axios";

export interface Response<T> {
  count: number;
  results: T[];
}

const axiosInstance = axios.create({
  baseURL: import.meta.env.VITE_BASE_URL,
});

export default class ApiClient<T> {
  constructor(private endPoint: string) {
    this.endPoint = endPoint;
  }
  getAll = (): Promise<Response<T>> =>
    axiosInstance
      .get<Response<T>>(this.endPoint, {
        params: {
          key: import.meta.env.VITE_SECRET_KEY,
        },
      })
      .then((res) => res.data);
}
