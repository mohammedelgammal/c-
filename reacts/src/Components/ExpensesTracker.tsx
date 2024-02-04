import { useState } from "react";
import ShoppingForm from "./ShoppingForm";
import ShoppingList from "./ShoppingList";
import { Expense } from "../types";

export default (): JSX.Element => {
  const [expenses, setExpenses] = useState<Expense[]>([]);
  return (
    <div className="p-3">
      <ShoppingForm setExpenses={setExpenses} />
      <ShoppingList expenses={expenses} setExpenses={setExpenses} />
    </div>
  );
};
