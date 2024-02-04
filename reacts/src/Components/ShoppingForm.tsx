import { SubmitHandler, useForm } from "react-hook-form";
import { Expense, ShoppingFormProps } from "../types";
import { z } from "zod";
import { zodResolver } from "@hookform/resolvers/zod";

export default ({ setExpenses }: ShoppingFormProps): JSX.Element => {
  const schema = z.object({
    description: z.string().min(3).max(20),
    amount: z.coerce.number().min(1).max(1000).nonnegative(),
    category: z.string(),
  });
  const {
    register,
    handleSubmit,
    reset,
    formState: { errors: formErrors, isValid: isFormValid },
  } = useForm<Expense>({
    resolver: zodResolver(schema),
  });
  const submitHandler: SubmitHandler<Expense> = (values: Expense) => {
    setExpenses((old) => [...old, { ...values, id: old.length + 1 }]);
    reset();
  };

  return (
    <form onSubmit={handleSubmit(submitHandler)}>
      <label htmlFor="description" className="form-label">
        Description
      </label>
      <input
        {...register("description")}
        type="text"
        className="form-control"
        id="description"
      />
      <p className="text-danger">{formErrors.description?.message}</p>
      <label htmlFor="amount" className="form-label">
        Amount
      </label>
      <input
        {...register("amount")}
        type="number"
        className="form-control"
        id="amount"
      />
      <p className="text-danger">{formErrors.amount?.message}</p>
      <label htmlFor="category" className="form-label">
        Category
      </label>
      <select
        {...register("category")}
        className="form-select mb-3"
        id="category"
        defaultValue=""
      >
        <option disabled>All Categories</option>
        <option value="groceries">Groceries</option>
        <option value="utilities">Utilities</option>
        <option value="entertainment">Entertainment</option>
      </select>
      <p className="text-danger">{formErrors.category?.message}</p>
      <button disabled={!isFormValid} className="btn btn-primary" type="submit">
        Submit
      </button>
    </form>
  );
};
