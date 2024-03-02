import SortingVisualizer from "./components/SortingVisualizer";
import useBubbleSort from "./hooks/useBubbleSort";

export default (): JSX.Element => {
  const [graph, selected, isFinished] = useBubbleSort();

  return (
    <SortingVisualizer
      algorithm="Bubble Sort"
      graph={graph}
      selected={selected}
      isFinished={isFinished}
    />
  );
};
