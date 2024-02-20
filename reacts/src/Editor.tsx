import ImageStorer, { JPEGCompressor, PNGCompressor } from "./Strategy";

export default (): JSX.Element => {
  const imageStorer = new ImageStorer();

  imageStorer.setCompressStrategy(new JPEGCompressor());
  imageStorer.compress("image one");

  imageStorer.setCompressStrategy(new PNGCompressor());
  imageStorer.compress("image two");

  imageStorer.store("image one");
  imageStorer.store("image two");

  return <></>;
};
