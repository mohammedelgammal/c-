type Genre = {
  id?: number;
  name: string;
  image_background: string;
};

type AsideProps = {
  genres: Genre[];
};

export { type Genre, type AsideProps };
