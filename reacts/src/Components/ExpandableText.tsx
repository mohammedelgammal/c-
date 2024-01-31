import { useState } from "react";
// types
import { ExpandableTextProps } from "../types";

export default ({
  maxChars = 20,
  children,
}: ExpandableTextProps): JSX.Element => {
  interface Text {
    length: number;
    isTrimmed: boolean;
  }
  const [text, setText] = useState<Text>({
    length: maxChars,
    isTrimmed: true,
  });
  const btnText = text.isTrimmed ? "Show more" : "Show less";
  const content: string =
    children.substring(0, text.length) + (text.isTrimmed && "...");
  const toggleTrimHandler = (): void => {
    setText({
      length: text.isTrimmed ? children.length : maxChars,
      isTrimmed: !text.isTrimmed,
    });
  };
  return (
    <>
      <br />
      <span>{content}</span>
      {children.length < maxChars && (
        <button onClick={toggleTrimHandler}>{btnText}</button>
      )}
    </>
  );
};
