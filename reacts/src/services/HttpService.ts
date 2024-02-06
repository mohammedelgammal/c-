import { AxiosResponse } from "axios";
import apiClient from "./apiClient";

class HttpService {
  constructor(private endPoint: string) {}
  getAll<T>(): {
    request: Promise<AxiosResponse<T>>;
    cancel: () => void;
  } {
    const controller = new AbortController();
    const request = apiClient.get<T>(this.endPoint + "/?/");
    return {
      request,
      cancel: () => {
        controller.abort();
      },
    };
  }
}

export default (endPoint: string) => new HttpService(endPoint);
