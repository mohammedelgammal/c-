import axios from "axios";

export default axios.create({
  baseURL: import.meta.env.VITE_BASE_URL,
  headers: {
    Authorization: `Bearer ${import.meta.env.VITE_SECRET_KEY}`,
  },
});
