import {
  Alert,
  AlertDescription,
  AlertIcon,
  AlertTitle,
} from "@chakra-ui/react";

export default (): JSX.Element => {
  return (
    <Alert display="flex" status="info">
      <AlertIcon />
      <AlertTitle>No data found</AlertTitle>
      <AlertDescription>Please try using different filters</AlertDescription>
    </Alert>
  );
};
