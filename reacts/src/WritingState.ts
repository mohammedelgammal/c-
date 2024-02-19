import _ from "lodash";

export default abstract class WritingState {
  public abstract write: (text: string) => string;
}

export class UpperCase extends WritingState {
  public override write = (text: string): string => {
    console.log("upper");
    return text.toUpperCase();
  };
}

export class LowerCase extends WritingState {
  public override write = (text: string): string => {
    console.log("lower");
    return text.toLowerCase();
  };
}

export class Capitalizen extends WritingState {
  public override write = (text: string): string => {
    console.log("capitalize");
    return _.capitalize(text);
  };
}
