import { AxiosError } from "axios";
import { User } from "../types";
import useUsers from "../hooks/useUsers";
import userService from "../services/httpService";

export default (): JSX.Element => {
  const { users, isLoading, error, setUsers, setError } = useUsers();

  const handleDeleteUser = (id: number): void => {
    const originalUsers: User[] = users;
    setUsers(users.filter((user) => user.id !== id));
    userService("users/")
      .delete(id)
      .catch((error: AxiosError) => {
        setError((err) => ({ ...err, delete: error.message }));
        setUsers(originalUsers);
      });
  };
  const handleAddUser = (): void => {
    const newUser: User = {
      id: users.length + 1,
      name: "Mosh Hamedani",
    };
    userService("users/")
      .create(newUser)
      .then(
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
                onClick={() => handleDeleteUser(user.id)}
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
