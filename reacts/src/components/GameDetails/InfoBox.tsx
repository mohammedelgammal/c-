import { List, ListItem, Stack, Text } from "@chakra-ui/react";

interface InfoBoxProps {
  title: string;
  list: string[];
}

export default ({ title, list }: InfoBoxProps): JSX.Element => {
  return (
    <Stack spacing={2}>
      <Text color="gray">{title}</Text>
      <List>
        {list.map((name) => (
          <ListItem key={name}>{name}</ListItem>
        ))}
      </List>
    </Stack>
  );
};
