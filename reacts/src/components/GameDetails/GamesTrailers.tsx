import useTrailers from "../../hooks/useTrailers";

interface TrailersProps {
  id: string | undefined;
}

export default ({ id = "" }: TrailersProps): JSX.Element => {
  const { data: trailers } = useTrailers(parseInt(id));
  console.log(trailers?.results[0]);
  return <></>;
};
