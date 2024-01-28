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
function printe(age: number): number {
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
function printea(object: unknown): void {
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
// Classes
class Account {
  // readonly
  // readonly id: number;
  // name: string;
  // private _amount: number;
  // // optional properties
  // location?: string;

  // constructor(id: number, name: string, amount: number) {
  //   this.id = id;
  //   this.name = name;
  //   this._amount = amount;
  // }

  // parameter property
  constructor(
    public readonly id: number,
    public name: string,
    private _amount: number,
    public location?: string | null,
    private _ssn?: number
  ) {
    if (typeof id !== "number") throw new Error("Invalid id...");
    this._ssn;
  }

  deposit(amount: number): void {
    if (amount <= 0) throw new Error("Invalid amount!");
    this._amount += amount;
  }
  //getter
  get amount(): number {
    return this._amount;
  }
  //setter
  set ssn(ssn: number) {
    if (ssn <= 0) throw new Error("Invalid ssn");
    this._ssn = ssn;
  }
}
// creating objects instances
const newAccount = new Account(1, "Mosh", 20);
newAccount.deposit(20);

// static props
class Ride {
  private static _rides = 0;
  start(): void {
    Ride._rides++;
  }
  stop(): void {
    Ride._rides--;
  }
  static get rides(): number {
    return Ride._rides;
  }
}
const rideOne = new Ride();
const rideTwo = new Ride();

rideOne.start();
rideTwo.start();
rideTwo.start();

class Person {
  constructor(public firstName: string, public lastName: string) {}
  public get fullName(): string {
    return this.firstName + " " + this.lastName;
  }
}

class Professor extends Person {
  override get fullName(): string {
    return "Professor ";
  }
}

const professor = new Professor("Amy", "Floyd");
console.log(professor.fullName);

console.log("erer");
