import ListGroup from "./Components/ListGroup";

export default (): JSX.Element => {
  const citizens: string[] = ["Mosh", "Max", "Role", "Omar"];
  const selectItemHandler = (item: string) =>
    console.log(item + " selected...");
  return (
    <ListGroup
      items={citizens}
      heading={"Citizens"}
      onSelectItem={selectItemHandler}
    />
  );
};
