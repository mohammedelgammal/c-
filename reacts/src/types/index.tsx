type ListGroupProps = {
  items: string[];
  heading: string;
  onSelectItem: (item: string) => void;
};

type AlertProps = {
  children: JSX.Element;
};

type ButtonProps = {
  text: string;
  onClick: (event: React.MouseEvent) => void;
  color?: "danger" | "primary" | "success";
};

type ExpandableTextProps = {
  maxChars?: number;
  children: string;
};

type Person = {
  name: string;
  age: number;
};

export {
  type ListGroupProps,
  type AlertProps,
  type ButtonProps,
  type ExpandableTextProps,
  type Person,
};
