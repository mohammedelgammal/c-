import { Stack } from "@chakra-ui/react";
import Navbar from "./Navbar";
import { Outlet } from "react-router-dom";

export default (): JSX.Element => {
  return (
    <Stack p={10}>
      <Navbar />
      <Outlet />
    </Stack>
  );
};
