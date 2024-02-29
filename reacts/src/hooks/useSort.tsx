import { useEffect, useState } from "react";
import createRandomList from "../helpers/createRandomList";
import swap from "../helpers/swap";

export default (
  maxHeight: number = 500,
  length: number = 200
): [number[], number, boolean] => {
  const [list, setList] = useState<number[]>(
    createRandomList(length, maxHeight)
  );
  const [selected, setSelected] = useState<number>(0);
  const [isFinished, setFinished] = useState<boolean>(false);

  useEffect(() => {
    let timer: NodeJS.Timeout;
    (async () => {
      for (let i = 0; i < list.length; i++)
        for (let j = 1; j < list.length; j++) {
          if (list[j] < list[j - 1]) {
            await new Promise((resolve) => {
              timer = setTimeout(resolve, 0);
              setSelected(j);
              setList([...swap(j, j - 1, list)]);
            });
          }
        }
      await new Promise(() => {
        setFinished(true);
        setSelected(-1);
      });
    })();
    return () => clearTimeout(timer);
  }, []);

  return [list, selected, isFinished];
};
