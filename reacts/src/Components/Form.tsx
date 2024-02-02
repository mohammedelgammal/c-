import { FieldValues, useForm } from "react-hook-form";
import { Person } from "../types";

export default (): JSX.Element => {
  const {
    register,
    handleSubmit,
    formState: {
      errors: { name: nameError, age: ageError },
    },
  } = useForm<Person>();
  const submitHandler = (fieldValues: FieldValues): void => {
    console.log(fieldValues);
  };
  const nameField = register("name", {
    required: "Name is a required field",
    minLength: {
      value: 2,
      message: "Name can be at least 2 characters",
    },
    pattern: {
      value: /^[A-Za-z]+$/i,
      message: "Invalid name input",
    },
  });
  const ageField = register("age", {
    required: "Age is a required field",
    min: {
      value: 18,
      message: "You should be at least 18 years old",
    },
    max: {
      value: 99,
      message: "Age must be max 99 years",
    },
  });
  return (
    <div className="m-3">
      <form
        onSubmit={handleSubmit((fieldValues) => submitHandler(fieldValues))}
      >
        <div className="mb-3">
          <label className="form-label" htmlFor="name">
            Name
          </label>
          <input
            {...nameField}
            type="text"
            className="form-control"
            id="name"
          />
          <p className="text-danger">{nameError?.message}</p>
        </div>
        <div className="mb-3">
          <label className="form-label" htmlFor="age">
            Age
          </label>
          <input
            {...ageField}
            type="number"
            className="form-control"
            id="age"
          />
          <p className="text-danger">{ageError?.message}</p>
        </div>
        <button className="btn btn-primary" type="submit">
          Submit
        </button>
      </form>
    </div>
  );
};
