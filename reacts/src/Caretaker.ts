import Memento from "./Memento";

export default class Caretaker {
  public mementos: Memento[] = [];
  push = (memento: Memento) => {
    this.mementos.push(memento);
  };
  pop = (): Memento | undefined => {
    return this.mementos.pop();
  };
}
