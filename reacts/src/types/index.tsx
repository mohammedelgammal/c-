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

type Expense = {
  id: number;
  description: string;
  amount: number;
  category: "groceries" | "utilities" | "entertainment";
};

type ShoppingFormProps = {
  setExpenses: React.Dispatch<React.SetStateAction<Expense[]>>;
};

type ShoppingListProps = {
  expenses: Expense[];
  setExpenses: React.Dispatch<React.SetStateAction<Expense[]>>;
};

type User = {
  id: number;
  name: string;
};

export {
  type ListGroupProps,
  type AlertProps,
  type ButtonProps,
  type ExpandableTextProps,
  type Person,
  type Expense,
  type ShoppingFormProps,
  type ShoppingListProps,
  type User,
};
