import axios from "axios";

export default axios.create({
  baseURL: import.meta.env.VITE_BASE_URL,
  params: {
    key: "736da1ca172043a69a99a629562398c0",
  },
});
