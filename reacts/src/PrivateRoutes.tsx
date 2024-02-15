import useAuth from "./hooks/useAuth";
import { Navigate, Outlet } from "react-router-dom";

export default (): JSX.Element => {
  const { isLoggedIn } = useAuth();
  return !isLoggedIn ? <Navigate to="login" /> : <Outlet />;
};
