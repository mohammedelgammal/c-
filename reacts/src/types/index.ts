import { SetStateAction } from "react";

type Genre = {
  id?: number;
  name: string;
  image_background: string;
  games: Game[];
  slug?: string;
};

type GenreProps = {
  id?: number;
  name: string;
  image_background: string;
  isActive: boolean;
  genres: Genre[];
  setFilters: React.Dispatch<SetStateAction<Filters>>;
};

type GenreHook = {
  genres: Genre[];
  isLoading: boolean;
  error: string;
};

type AsideProps = GenreHook & {
  genre: Genre;
  setFilters: React.Dispatch<SetStateAction<Filters>>;
};

type GamesHook = {
  games: GameProps[];
  isLoading: boolean;
  error: string;
};

type MainProps = {
  categoryTitle: string;
  games: GameProps[];
  isLoading: boolean;
  error: string;
  setFilters: React.Dispatch<SetStateAction<Filters>>;
};

type Platform = {
  platform: {
    slug: string;
  };
};

type GameProps = {
  id?: string;
  name: string;
  background_image: string;
  added: number;
  platforms: Platform[];
  released: string;
  rating: number;
  genres: { name: string }[];
};

type Game = {
  id: number;
  name: string;
  added: number;
};

type QueryParams = {
  [K: string]: string | number;
};

type Filters = {
  genres: Genre;
  platforms: string;
  ordering: string;
};

type SelectProps = {
  setFilters: React.Dispatch<SetStateAction<Filters>>;
};

type Platforms = {
  id?: number;
  name: string;
  slug: string;
};

export {
  type Genre,
  type GenreHook,
  type AsideProps,
  type MainProps,
  type GameProps,
  type GenreProps,
  type Game,
  type GamesHook,
  type QueryParams,
  type Filters,
  type SelectProps,
  type Platforms,
};
