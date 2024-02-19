import {
  Button,
  Flex,
  Input,
  List,
  ListItem,
  Stack,
  Text,
} from "@chakra-ui/react";
import { useRef, useState } from "react";
import Document from "./Document";
import Caretaker from "./Caretaker";

export default (): JSX.Element => {
  const inputRef = useRef<HTMLInputElement>(null);
  const [document, setDocument] = useState<Document>(new Document());
  const [history, setHistory] = useState<Caretaker>(new Caretaker());
  const handleSubmit = (e: React.FormEvent<HTMLFormElement>): void => {
    const content = inputRef.current!.value;
    e.preventDefault();
    const newDocument = Object.assign({}, document);
    newDocument.write(content);
    setDocument(newDocument);
    const newHistory = Object.assign({}, history);
    newHistory.push(document.createMemento());
    setHistory(newHistory);
    inputRef.current!.value = "";
  };
  const handleUndo = (): void => {
    const newHistory = Object.assign({}, history);
    newHistory.pop();
    setHistory(newHistory);
  };

  return (
    <Stack spacing={10}>
      <form onSubmit={handleSubmit}>
        <Flex>
          <Input
            ref={inputRef}
            type="text"
            placeholder="Write content here..."
            isRequired
          />
          <Button ml={2} type="submit" px={10}>
            Submit
          </Button>
          <Button ml={2} onClick={handleUndo} px={10}>
            Undo
          </Button>
        </Flex>
      </form>
      <Text fontSize="2xl">{document.getContent()}</Text>
      <Text>History: </Text>
      <List>
        {history.mementos.map((memento, index) => (
          <ListItem key={index}>
            {index + 1}: {memento.getSavedContent()}
          </ListItem>
        ))}
      </List>
    </Stack>
  );
};
