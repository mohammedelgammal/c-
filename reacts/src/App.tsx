import { useState } from "react";
import { Navbar, Aside, Main, Layout } from "./components";

export interface Filters {
  genres: string;
  platforms: string;
  ordering: string;
}

export default (): JSX.Element => {
  const [filters, setFilters] = useState<Filters>({
    genres: "",
    platforms: "",
    ordering: "",
  });
  return (
    <Layout>
      <Main setFilters={setFilters} filters={filters} />
      <Navbar />
      <Aside setFilters={setFilters} selectedGenre={filters.genres} />
    </Layout>
  );
};
