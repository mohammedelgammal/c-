type Genre = {
  id?: number;
  name: string;
  image_background: string;
};

type AsideProps = {
  genres: Genre[];
};

type MainProps = {
  categoryTitle: string;
  games: GameProps[];
};

type GameProps = {
  src: string;
  platforms: string[];
  rating: number;
  title: string;
};

export { type Genre, type AsideProps, type MainProps, type GameProps };
