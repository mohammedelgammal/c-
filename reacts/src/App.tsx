import { Outlet } from "react-router-dom";
import { Layout, Navbar } from "./components";

export default (): JSX.Element => {
  return (
    <Layout>
      <Navbar />
      <Outlet />
    </Layout>
  );
};
