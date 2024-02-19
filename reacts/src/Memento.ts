export default class Memento {
  constructor(private content: string) {
    this.content = content;
  }
  getSavedContent(): string {
    return this.content;
  }
}
