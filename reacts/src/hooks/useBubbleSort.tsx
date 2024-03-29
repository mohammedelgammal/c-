import useSort from "./useSort";
import swap from "../helpers/swap";
import { SortingData, SortingProps } from "../entities/Sorting";

export default (): SortingData => {
  const doSort = ({
    list,
    setList,
    setSelected,
    setFinished,
  }: SortingProps) => {
    let timer: NodeJS.Timeout = setTimeout(() => {});
    for (let i = 0; i < list.length; i++) {
      for (let j = 0; j < list.length - i - 1; j++) {
        timer = setTimeout(() => {
          setSelected([j, j + 1]);
          if (list[j] > list[j + 1]) setList(swap(j, j + 1, list));
          if (i === list.length - 2) setFinished(true);
        }, 10 * i * list.length + j * 10);
      }
    }
    return timer;
  };
  return useSort({
    maxHeight: 500,
    length: 100,
    doSort,
  });
};
