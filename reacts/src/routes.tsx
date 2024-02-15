import { createBrowserRouter } from "react-router-dom";
import Contact from "./Contact";
import HomePage from "./HomePage";
import Layout from "./Layout";
import User from "./User";
import Users from "./Users";

export default createBrowserRouter([
  {
    path: "",
    element: <Layout />,
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
      { path: "contact", element: <Contact /> },
    ],
  },
  {
    path: "*",
    element: <p>Wrong path</p>,
  },
]);
