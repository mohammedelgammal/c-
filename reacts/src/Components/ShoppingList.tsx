import { useState } from "react";
import _ from "lodash";
import { Expense, ShoppingListProps } from "../types";

export default ({ expenses, setExpenses }: ShoppingListProps): JSX.Element => {
  const [filter, setFilter] = useState<string>("all");
  const handleSelectChange = (
    e: React.ChangeEvent<HTMLSelectElement>
  ): void => {
    setFilter(e.target.value);
  };
  const handleDelete = (id: number) => {
    setExpenses((expenses) => expenses.filter((expense) => expense.id !== id));
  };
  const total = expenses.reduce(
    (total, currentExpense) => currentExpense.amount + total,
    0
  );
  return (
    <div className="my-3">
      <div>
        <label htmlFor="expenses">Filter</label>
        <select
          className="form-select mb-3"
          id="expenses"
          onChange={(e) => handleSelectChange(e)}
          value={filter}
        >
          <option value="all">All</option>
          <option value="groceries">Groceries</option>
          <option value="utilities">Utilities</option>
          <option value="entertainment">Entertainment</option>
        </select>
      </div>
      <div>
        <table className="table">
          <thead>
            <tr>
              <th scope="col">#</th>
              <th scope="col">Description</th>
              <th scope="col">Amount</th>
              <th scope="col">Category</th>
              <th scope="col">Action</th>
            </tr>
          </thead>
          <tbody>
            {expenses
              .filter((expense: Expense) => {
                if (filter === "all") return expense;
                return expense.category === filter;
              })
              .map(
                (expense: Expense, index: number): JSX.Element => (
                  <tr key={index + 1}>
                    <th scope="row">{index + 1}</th>
                    <td>{expense.description}</td>
                    <td>{`$${expense.amount}.00`}</td>
                    <td>{expense.category}</td>
                    <td>
                      <button onClick={() => handleDelete(expense.id)}>
                        Delete
                      </button>
                    </td>
                  </tr>
                )
              )}
          </tbody>
          {total ? (
            <tfoot>
              <tr>
                <th>Total is: </th>
                <td></td>
                <td></td>
                <td></td>
                <td>${total}.00</td>
              </tr>
            </tfoot>
          ) : null}
        </table>
      </div>
    </div>
  );
};
