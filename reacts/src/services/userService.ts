import { AxiosResponse } from "axios";
import { User } from "../types";
import apiClient from "./apiClient";

class UserService {
  getAllUsers(): {
    request: Promise<AxiosResponse<User[]>>;
    cancel: () => void;
  } {
    const controller = new AbortController();
    const request = apiClient.get("users/", { signal: controller.signal });
    const cancel = () => controller.abort();
    return { request, cancel };
  }
  deleteUser(id: number): Promise<AxiosResponse> {
    const request = apiClient.delete("users/" + id);
    return request;
  }
  createUser(newUser: User): Promise<AxiosResponse<User>> {
    const request = apiClient.post("users/", newUser);
    return request;
  }
}

export default new UserService();
