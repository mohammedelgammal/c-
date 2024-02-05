import { AxiosResponse } from "axios";
import apiClient from "./apiClient";

class HTTPService {
  constructor(private endPoint: string) {}
  getAll<T>(): {
    request: Promise<AxiosResponse<T[]>>;
    cancel: () => void;
  } {
    const controller = new AbortController();
    const request = apiClient.get(this.endPoint, { signal: controller.signal });
    const cancel = () => controller.abort();
    return { request, cancel };
  }
  delete(id: number): Promise<AxiosResponse> {
    const request = apiClient.delete(this.endPoint + id);
    return request;
  }
  create<T>(newEntity: T): Promise<AxiosResponse<T>> {
    const request = apiClient.post("users/", newEntity);
    return request;
  }
}

export default (endPoint: string) => new HTTPService(endPoint);
