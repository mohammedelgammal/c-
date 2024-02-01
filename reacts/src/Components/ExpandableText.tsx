import { useState } from "react";
import { ExpandableTextProps } from "../types";

export default ({ maxChars, children }: ExpandableTextProps) => {
  const [isTrimmed, setTrimmed] = useState<boolean>(true);
  const computedChildren: string =
    maxChars && isTrimmed ? children.substring(0, maxChars) : children;
  const btnContent: string = isTrimmed ? "Show more" : "Show less";
  const trimHandler = (): void => {
    setTrimmed((isTrimmed) => !isTrimmed);
  };
  const isExpandable: boolean =
    !!maxChars && Boolean(maxChars < children.length);

  return (
    <>
      <p>
        {isExpandable && isTrimmed
          ? computedChildren.concat("...")
          : computedChildren}
      </p>
      {isExpandable && <button onClick={trimHandler}>{btnContent}</button>}
    </>
  );
};
