export default (
  counter: number,
  action: { type: "INCREMENT" | "DECREMENT" }
): number => {
  if (action.type === "INCREMENT") return counter + 1;
  if (action.type === "DECREMENT") return counter ? counter - 1 : counter;
  return counter;
};
