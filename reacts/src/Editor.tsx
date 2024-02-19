import { Flex, Input, Select, Text } from "@chakra-ui/react";
import { useRef, useState } from "react";
import TextBox from "./TextBox";
import WritingState, {
  Capitalizen,
  LowerCase,
  UpperCase,
} from "./WritingState";

enum Case {
  UPPER = "u",
  LOWER = "l",
  CAPITALIZE = "c",
}

export default (): JSX.Element => {
  const inputRef = useRef<HTMLInputElement>(null);
  const [writingState, setWritingState] = useState<WritingState>(
    new LowerCase()
  );
  const [textBox, setTextBox] = useState<TextBox>(new TextBox(writingState));
  const handleWritingStateChange = (
    e: React.ChangeEvent<HTMLSelectElement>
  ): void => {
    const selectedCase = e.target.value;
    const newWritingState =
      selectedCase === Case.UPPER
        ? new UpperCase()
        : selectedCase === Case.LOWER
        ? new LowerCase()
        : new Capitalizen();
    setWritingState(newWritingState);
  };
  const handleSubmit = (e: React.FormEvent<HTMLFormElement>): void => {
    const content = inputRef.current!.value;
    e.preventDefault();
    const newTextBox = Object.assign({}, textBox);
    newTextBox.setState(writingState);
    newTextBox.write(content);
    setTextBox(newTextBox);
    inputRef.current!.value = "";
  };
  return (
    <Flex gap={5}>
      <form onSubmit={handleSubmit}>
        <Input
          ref={inputRef}
          type="text"
          placeholder="Type your content..."
          isRequired
        />
        <Select onChange={handleWritingStateChange}>
          <option value={Case.LOWER}>aa</option>
          <option value={Case.UPPER}>AA</option>
          <option value={Case.CAPITALIZE}>Aa</option>
        </Select>
      </form>
      <Text>{textBox.getContent()}</Text>
    </Flex>
  );
};
