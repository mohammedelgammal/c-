// explicit type annotation
let num: number = 0;
// implicit type => any
let x;
// explicit type any
let doc: any = "mine";
doc = 21;
// array of any
let arr: any[] = [1, true, "fa"];
// array of single type
let list: number[] = [1, 2, 3];
// tuples can be two typically or more
let tuple: [number, boolean] = [1, true];
let tup: [number, boolean, string, boolean] = [1, true, "lir", false];
// enums - just like others
enum Size {
  Small = 1,
  Medium,
  Large,
}
const mySize: Size = Size.Large; // 3
// functions and optional args
function print(age: number): number {
  let x: number = 10;
  if (age < 18) return -1;
  return 1 * x;
}
// type alias
type Employee = {
  name: string;
  age?: number;
  readonly file: boolean;
  retire: (date: Date) => void;
};
// objects & shapes & methods & readonly
let obj: Employee = {
  name: "more",
  file: false,
  retire: (date: Date = new Date()) => console.log(date),
};
// type unoin => one of 'em
function weigh(weight: number | string): number | null {
  if (typeof weight === "string") return parseInt(weight);
  else return weight;
}
// type intersection => combine two types &
type Draggable = {
  drag: () => void;
};
type Resizeable = {
  resize: () => void;
};
type ResizeableDragabble = Draggable & Resizeable;
const resize: ResizeableDragabble = {
  resize: () => console.log("resize"),
  drag: () => console.log("drag"),
};
// literal type
type Metric = "cm" | "inch" | 50;
const len: Metric = 50;
// optional member accessing operator
function getEmployee(emplyee: Employee | null): Employee | null | undefined {
  return emplyee ?? undefined;
}
// Nullish coalescing operator ?? VVVVV>>>>>IIIIIII
// instead of: !employee ? somevalue : employee instead=> employee ?? 30
// type assersion
let commonWeight: number = weigh("10kg") as number;
let otherWeight: number = <number>weigh(10);
// unknown type
function print(object: unknown): void {
  if (typeof object === "string") console.log(object.length);
  if (typeof object === "number") console.log(object.toString().length);
  if (object instanceof Boolean) console.log(object);
  return;
}
// never type
function thrower(message: string): never {
  throw new Error(message);
}
// thrower("an error ocurred!"); // code below this line is unreachable using config file

console.log(mySize);
console.log(print(10));
obj.retire(new Date());
console.log(weigh("10kg"));
console.log(weigh(12));
console.log(getEmployee(null)?.name); // undefined
