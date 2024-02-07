import { AxiosResponse } from "axios";
import apiClient from "./apiClient";
import { QueryParams } from "../types";

class HttpService {
  constructor(private endPoint: string) {}
  getAll<T>(queryParams: QueryParams = {}): {
    request: Promise<AxiosResponse<T>>;
    cancel: () => void;
  } {
    const controller = new AbortController();
    const request = apiClient.get<T>(this.endPoint, {
      signal: controller.signal,
      params: queryParams,
    });
    return {
      request,
      cancel: () => {
        controller.abort();
      },
    };
  }
}

export default (endPoint: string) => new HttpService(endPoint);
