import { useEffect, useState } from "react";
import userService from "../services/httpService";
import { User } from "../types";
import { AxiosError, AxiosResponse, CanceledError } from "axios";
import { UseUser } from "../types";

export default (): UseUser => {
  const [users, setUsers] = useState<User[]>([]);
  const [isLoading, setLoading] = useState<boolean>(true);
  const [error, setError] = useState({ fetch: "", delete: "", create: "" });
  useEffect(() => {
    const { request, cancel } = userService("users/").getAll<User>();
    request
      .then(
        (res: AxiosResponse<User[]>): void => {
          setUsers(res.data);
          setLoading(true);
        },
        (error: AxiosError) => {
          if (error instanceof CanceledError) return;
          console.error(error.message);
          setError((err) => ({ ...err, fetch: error.message }));
        }
      )
      .then(() => setLoading(false));
    return cancel;
  }, []);
  return { users, isLoading, error, setUsers, setLoading, setError };
};
