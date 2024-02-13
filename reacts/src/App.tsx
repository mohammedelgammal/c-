import { Navbar, Aside, Main, Layout } from "./components";

export default (): JSX.Element => {
  return (
    <Layout>
      <Main />
      <Navbar />
      <Aside />
    </Layout>
  );
};
