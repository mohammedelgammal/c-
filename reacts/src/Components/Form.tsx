import { useRef } from "react";

export default (): JSX.Element => {
  const nameRef = useRef<HTMLInputElement>(null);
  const ageRef = useRef<HTMLInputElement>(null);
  const handleSubmit = (e: React.FormEvent): void => {
    e.preventDefault();
    console.log(nameRef.current?.value, ageRef.current?.value);
  };
  return (
    <div className="m-3">
      <form onSubmit={(e) => handleSubmit(e)}>
        <div className="mb-3">
          <label className="form-label" htmlFor="name">
            Name
          </label>
          <input ref={nameRef} type="text" className="form-control" id="name" />
        </div>
        <div className="mb-3">
          <label className="form-label" htmlFor="age">
            Age
          </label>
          <input ref={ageRef} type="number" className="form-control" id="age" />
        </div>
        <button className="btn btn-primary" type="submit">
          Submit
        </button>
      </form>
    </div>
  );
};
