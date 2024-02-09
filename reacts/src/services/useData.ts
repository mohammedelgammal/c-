import { useEffect, useState } from "react";
import { AxiosRequestConfig, AxiosError, CanceledError } from "axios";
import apiClient from "./apiClient";

type VoidFunc = () => void;
type Results<T> = { results: T[] };

export default <T>(
  endPoint: string,
  requestConfig?: AxiosRequestConfig,
  dependencies: unknown[] = []
): { data: T[]; isLoading: boolean; error: string } => {
  const [data, setData] = useState<T[]>([]);
  const [isLoading, setLoading] = useState<boolean>(true);
  const [error, setError] = useState<string>("");

  const cleanUpParams = (
    requestConfig: AxiosRequestConfig
  ): AxiosRequestConfig => {
    const { params } = requestConfig;
    for (let key of Object.keys(params)) {
      if (!params[key]) delete params[key];
    }
    return requestConfig;
  };

  useEffect((): VoidFunc => {
    const controller = new AbortController();
    apiClient
      .get<Results<T>>(endPoint, {
        signal: controller.signal,
        ...(requestConfig && cleanUpParams(requestConfig)),
      })
      .then(
        (response) => setData(response.data.results),
        (error: AxiosError) => {
          if (error instanceof CanceledError) return;
          setError(error.message);
        }
      )
      .then(() => setLoading(false));
    return () => controller.abort();
  }, dependencies);
  return { data, isLoading, error };
};
