import { ReactNode, useReducer } from "react";
import loginReducer, { Login } from "./reducers/loginReducer";
import LoginContext from "./context/loginContext";

export default ({ children }: { children: ReactNode }): JSX.Element => {
  const [login, dispatchLogin] = useReducer(loginReducer, {} as Login);
  return (
    <LoginContext.Provider value={{ login, dispatch: dispatchLogin }}>
      {children}
    </LoginContext.Provider>
  );
};
