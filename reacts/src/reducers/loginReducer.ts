type Action = "LOGIN" | "LOGOUT";

interface Login {
  name: string;
  isLoggedIn: boolean;
}

export default (login: Login, action: Action): Login => {
  if (action === "LOGIN")
    return {
      ...login,
      name: "Mosh Hamedani",
      isLoggedIn: true,
    };
  if (action === "LOGOUT")
    return {
      name: "",
      isLoggedIn: false,
    };
  return login;
};
