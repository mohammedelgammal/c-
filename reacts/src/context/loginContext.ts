import React from "react";
import { Action, Login } from "../reducers/loginReducer";

interface LoginContextType {
  login: Login;
  dispatch: React.Dispatch<Action>;
}

export default React.createContext<LoginContextType>({} as LoginContextType);
