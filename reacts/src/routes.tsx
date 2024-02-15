import { createBrowserRouter } from "react-router-dom";
import Contact from "./Contact";
import HomePage from "./HomePage";
import Layout from "./Layout";
import User from "./User";
import Users from "./Users";
import ErrorPage from "./ErrorPage";
import Login from "./Login";

export default createBrowserRouter([
  {
    path: "",
    element: <Layout />,
    errorElement: <ErrorPage />,
    children: [
      { index: true, element: <HomePage /> },
      {
        path: "users",
        element: <Users />,
        children: [
          {
            path: ":id",
            element: <User />,
          },
        ],
      },
      { path: "login", element: <Login /> },
      { path: "contact", element: <Contact /> },
    ],
  },
]);
