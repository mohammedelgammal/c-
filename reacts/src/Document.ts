import Memento from "./Memento";

export default class Document {
  private content: string = "";
  getContent = (): string => {
    return this.content;
  };
  write = (content: string): void => {
    this.content = content;
  };
  createMemento = (): Memento => {
    return new Memento(this.content);
  };
  restore = (memento: Memento): void => {
    this.content = memento.getSavedContent();
  };
}
