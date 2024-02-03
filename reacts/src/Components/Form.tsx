import { FieldValues, SubmitHandler, useForm } from "react-hook-form";
import { z } from "zod";
import { zodResolver } from "@hookform/resolvers/zod";
import { Person } from "../types";

export default (): JSX.Element => {
  const schema = z.object({
    name: z
      .string({
        invalid_type_error: "Invalid input. Please double check your name!",
        required_error: "Name is a required field",
      })
      .min(2)
      .max(20),
    age: z.coerce
      .number({
        invalid_type_error: "Invalid input. Please double check your age!",
        required_error: "Age is a required field",
      })
      .min(18)
      .max(99)
      .nonnegative(),
  });
  const {
    register,
    handleSubmit,
    formState: { errors: formErrors },
  } = useForm<Person>({ resolver: zodResolver(schema) });
  const submitHandler: SubmitHandler<Person> = (data: FieldValues): void => {
    console.log(data);
  };
  return (
    <div className="m-3">
      <form onSubmit={handleSubmit(submitHandler)}>
        <div className="mb-3">
          <label className="form-label" htmlFor="name">
            Name
          </label>
          <input
            type="text"
            className="form-control"
            id="name"
            {...register("name")}
          />
          <p className="text-danger">{formErrors.name?.message}</p>
        </div>
        <div className="mb-3">
          <label className="form-label" htmlFor="age">
            Age
          </label>
          <input
            type="number"
            className="form-control"
            id="age"
            {...register("age")}
          />
          <p className="text-danger">{formErrors.age?.message}</p>
        </div>
        <button className="btn btn-primary" type="submit">
          Submit
        </button>
      </form>
    </div>
  );
};
