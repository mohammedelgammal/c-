import { ButtonProps } from "../types";

export default ({
  text,
  color = "primary",
  onClick,
}: ButtonProps): JSX.Element => {
  return (
    <button className={`btn btn-${color}`} onClick={(e) => onClick?.(e)}>
      {text}
    </button>
  );
};
