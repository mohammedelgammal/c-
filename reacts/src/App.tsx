import { Aside, Layout, Main, Navbar } from "./components";

export default (): JSX.Element => {
  return (
    <Layout>
      <Main />
      <Navbar />
      <Aside />
    </Layout>
  );
};
