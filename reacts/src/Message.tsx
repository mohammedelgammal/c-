export default (): JSX.Element => {
  const name: string = "mosh";
  return name ? <h1>{name}</h1> : <h1>world</h1>;
};
