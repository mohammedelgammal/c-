import { FieldValues, useForm } from "react-hook-form";

export default (): JSX.Element => {
  const { register, handleSubmit } = useForm();
  const nameField = register("name");
  const ageField = register("age");
  const submitHandler = (formValues: FieldValues): void => {
    console.log(formValues.name);
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
            {...nameField}
          />
        </div>
        <div className="mb-3">
          <label className="form-label" htmlFor="age">
            Age
          </label>
          <input
            type="number"
            className="form-control"
            id="age"
            {...ageField}
          />
        </div>
        <button className="btn btn-primary" type="submit">
          Submit
        </button>
      </form>
    </div>
  );
};
