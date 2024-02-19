import WritingState from "./WritingState";

export default class TextBox {
  constructor(private _state: WritingState, private _content: string = "") {
    this._state = _state;
    this._content = _content;
  }
  setState = (state: WritingState) => {
    this._state = state;
  };
  write = (text: string): void => {
    this._content += this._state.write(text);
  };
  getContent = (): string => {
    return this._content;
  };
}
