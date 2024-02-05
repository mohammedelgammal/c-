import { useEffect, useState } from "react";
import { User } from "../types";
import { AxiosError, AxiosResponse, CanceledError } from "axios";
import apiClient from "../services/apiClient";

export default (): JSX.Element => {
  const [users, setUsers] = useState<User[]>([]);
  const [isLoading, setLoading] = useState<boolean>(true);
  const [error, setError] = useState({ fetch: "", delete: "", create: "" });
  const getUsers = (): (() => void) => {
    const controller = new AbortController();
    apiClient
      .get("users/", { signal: controller.signal })
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
    return () => controller.abort();
  };
  useEffect(getUsers, []);
  const handleDeleteUser = (id: number): void => {
    const originalUsers: User[] = users;
    setUsers(users.filter((user) => user.id !== id));
    apiClient.delete("users/" + id).catch((error: AxiosError) => {
      setError((err) => ({ ...err, delete: error.message }));
      setUsers(originalUsers);
    });
  };
  const handleAddUser = (): void => {
    const newUser: User = {
      id: users.length + 1,
      name: "Mosh Hamedani",
    };
    apiClient.post("users/", newUser).then(
      ({ data: createdUser }) => setUsers((users) => [...users, createdUser]),
      (err: AxiosError) => {
        const originalUsers: User[] = users;
        setError((error) => ({ ...error, create: err.message }));
        setUsers(originalUsers);
      }
    );
  };

  return (
    <div className="m-3">
      {error.delete || error.fetch ? (
        <p className="text-danger text-center">
          {error.fetch} {error.delete} {error.create}
        </p>
      ) : null}
      <button className="btn btn-primary mb-3" onClick={handleAddUser}>
        Add User
      </button>
      {isLoading ? (
        <div className="spinner-border" />
      ) : users.length ? (
        <ul className="list-group">
          {users.map((user) => (
            <li
              key={user.id}
              className="list-group-item d-flex justify-content-between"
            >
              {user.name}
              <button
                className="btn btn-danger"
                onClick={handleDeleteUser.bind(this, user.id)}
              >
                Delete
              </button>
            </li>
          ))}
        </ul>
      ) : null}
    </div>
  );
};
