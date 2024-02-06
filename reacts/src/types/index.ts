import { SetStateAction } from "react";

type Genre = {
  id?: number;
  name: string;
  image_background: string;
  games: Game[];
};

type GenreProps = {
  id?: number;
  name: string;
  image_background: string;
  isActive: boolean;
  genres: Genre[];
  setGenre: React.Dispatch<SetStateAction<Genre>>;
};

type GenreHook = {
  genres: Genre[];
  isLoading: boolean;
  error: string;
};

type AsideProps = GenreHook & {
  genre: Genre;
  setGenre: React.Dispatch<SetStateAction<Genre>>;
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
};

type Game = {
  id: number;
  name: string;
  added: number;
};

type QueryParams = {
  [K: string]: string | number;
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
};
