import { Box, Switch } from "@chakra-ui/react";

export default (): JSX.Element => {
  const handleSwitch = (e: React.ChangeEvent<HTMLInputElement>) => {
    console.log(e.target.checked);
  };
  return (
    <Box flex="initial" display="flex" alignItems="center" gap="10px">
      <Switch id="switch" onChange={(e) => handleSwitch(e)} />
      <label style={{ whiteSpace: "nowrap" }} htmlFor="switch">
        Dark Mode
      </label>
    </Box>
  );
};
