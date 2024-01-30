import { useState, MouseEvent } from "react";
// types
import { ListGroupProps } from "../types";
import Alert from "./Alert";
import Button from "./Button";

export default ({
  items,
  heading,
  onSelectItem,
}: ListGroupProps): JSX.Element => {
  const [activeIndex, setActiveIndex] = useState<number>(-1);
  const noContentMessage: boolean | JSX.Element = !items.length && (
    <p>No {heading.toLowerCase()} can be found...</p>
  );
  const getClassName = (key: number): string =>
    key === activeIndex ? "active" : "";
  const listItemClickHandler = (key: number, { target }: MouseEvent): void => {
    target;
    key;
    setActiveIndex(key);
  };
  const buttonClickHandler = (e: React.MouseEvent): void => {
    console.log("Button event", e);
  };
  return (
    <>
      <h1 className="mx-1">{heading}</h1>
      <ul className="list-group">
        {noContentMessage}
        {items.map<JSX.Element>((item: string, key: number) => (
          <li
            key={key}
            className={"list-group-item " + getClassName(key)}
            onClick={(e) => {
              listItemClickHandler(key, e);
              onSelectItem(item);
            }}
          >
            {item}
          </li>
        ))}
      </ul>
      <Alert>
        <span>Be cautious alert occured!!</span>
      </Alert>
      <Button text="Submit" color="danger" onClick={buttonClickHandler} />
    </>
  );
};
