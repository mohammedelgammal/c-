import { useState } from "react";
// types
import { Person } from "../types";

export default (): JSX.Element => {
  const [person, setPerson] = useState<Person>({ name: "", age: 0 });
  const handleNameChange = (e: React.ChangeEvent<HTMLInputElement>): void => {
    setPerson((person) => ({ ...person, name: e.target.value }));
  };
  const handleAgeChange = (e: React.ChangeEvent<HTMLInputElement>): void => {
    setPerson((person) => ({ ...person, age: parseInt(e.target.value) }));
  };
  const computedAge = person.age ? person.age : "";
  const handleSubmit = (e: React.FormEvent): void => {
    e.preventDefault();
    console.log(person.age, person.name);
  };
  return (
    <div className="m-3">
      <form onSubmit={handleSubmit}>
        <div className="mb-3">
          <label className="form-label" htmlFor="name">
            Name
          </label>
          <input
            onChange={(e) => handleNameChange(e)}
            type="text"
            className="form-control"
            id="name"
            value={person.name}
          />
        </div>
        <div className="mb-3">
          <label className="form-label" htmlFor="age">
            Age
          </label>
          <input
            onChange={(e) => handleAgeChange(e)}
            type="number"
            className="form-control"
            id="age"
            value={computedAge}
          />
        </div>
        <button className="btn btn-primary" type="submit">
          Submit
        </button>
      </form>
    </div>
  );
};
