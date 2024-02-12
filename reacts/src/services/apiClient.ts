import axios, { AxiosRequestConfig } from "axios";

const axiosInstance = axios.create({
  baseURL: "https://jsonplaceholder.typicode.com",
});

export default class ApiClient<T> {
  constructor(private endPoint: string) {
    this.endPoint = endPoint;
  }
  getAll = (reqConfig?: AxiosRequestConfig) =>
    axiosInstance.get<T[]>(this.endPoint, reqConfig).then((res) => res.data);
  post = (payload: T, reqConfig?: AxiosRequestConfig) =>
    axiosInstance
      .post<T>(this.endPoint, payload, reqConfig)
      .then((res) => res.data);
}
