import { useState, MouseEvent } from "react";
// types
import { ListGroupProps } from "../types";
// components
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
  const [current, setCurrent] = useState<number>(0);
  let count = 0;
  const increaseCurrentHandler = (): void => {
    setCurrent((current) => current + 1);
    console.log("current is: ", current);
    console.log("count is: ", count);
  };
  interface Bug {
    id: number;
    title: string;
    isFixed: boolean;
  }
  const intitialBugs: Bug[] = [
    { id: 1, title: "Bug1", isFixed: false },
    { id: 2, title: "Bug2", isFixed: false },
  ];
  const [bugs, setBugs] = useState<Bug[]>(intitialBugs);

  const personHandler = function (targetId: number): void {
    setBugs((bugs) =>
      bugs.map((bug) =>
        bug.id === targetId ? ((bug.isFixed = true), bug) : bug
      )
    );
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
      <Button
        text="Increment"
        color="primary"
        onClick={increaseCurrentHandler}
      />
      <Button
        text={bugs[1].isFixed ? "isFixed" : "click to fix bug 1"}
        onClick={() => personHandler(1)}
      />
    </>
  );
};
