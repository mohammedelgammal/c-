import { AlertProps } from "../types";

export default ({ children }: AlertProps): JSX.Element => {
  return (
    <>
      <h4 className="m-3">Alert Component</h4>
      <div className="alert alert-primary">{children}</div>
    </>
  );
};
