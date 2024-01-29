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
// generic classes
class KeyValuePair<K, V> {
  constructor(public key: K, public value: V) {}
}
const kv = new KeyValuePair(39, null);

// generic functions
function gener<V>(value: V): [V] {
  return [value];
}

const vegen = gener(+"3"); // array of numbers
// generic interface
interface Result<T> {
  data: T | null;
  error: string | null;
}

function fetche<T>(): Result<T> {
  return { data: null, error: null };
}

interface User {
  name: string;
}

interface Product {
  price: number;
}

const data = fetche<Product>();
data.data?.price;

interface Pet {
  isPet: boolean;
  id: string | number;
}

// type mapping
interface Citizen {
  name: string;
  age: number;
}
// mapping to readonly type
type ReadonlyType<T> = {
  readonly [K in keyof T]: T[K];
};
type OptionalType<T> = {
  [K in keyof T]?: T[K];
};
type NullishType<T> = {
  [K in keyof T]: T[K] | null;
};

const citizen: ReadonlyType<Citizen> = {
  name: "howard",
  age: 32,
};

const optionalCitizen: OptionalType<Citizen> = {
  name: "kyle",
};

const nullableCitizen: NullishType<Citizen> = {
  name: null,
  age: 32,
};

// class decorator

interface ElementSelector {
  selector: string;
}

// decorator factory
function SelectorComponent(options: ElementSelector): Function {
  return function (constructor: Function): void {
    // console.log("Component decorator is called...");
    // prototype
    constructor.prototype.id = new Date();
    constructor.prototype.options = options;
    constructor.prototype.insertIntoDOM = function (): void {
      console.log("inserted into DOM");
    };
  };
}

// decorator composition
function Pipe(constructor: Function): void {
  // console.log("Pipe decorator is called...");
  constructor.prototype.pipe = true;
}

// pipe is called first
@SelectorComponent({ selector: "#users-id" })
@Pipe
class ProfileComponent {}

const profile: ProfileComponent = new ProfileComponent();

function Log(
  target: any,
  methodName: string,
  descriptor: PropertyDescriptor
): void {
  const originalMethod = descriptor.value as Function;
  descriptor.value = function <T>(...args: T[]) {
    console.log("Hello ");
    originalMethod.call(this, ...args);
    console.log("How are you doing");
  };
}

class Robot {
  @Log
  call<T>(name: T): void {
    console.log(name);
  }
}

function Capitalize(
  target: any,
  methodName: string,
  descriptor: PropertyDescriptor
): void {
  const originalGetter = descriptor.get as Function;
  descriptor.get = function (): string {
    const value = originalGetter.call(this);
    return typeof value === "string" ? value.toUpperCase() : value;
  };
}

function Underscore(
  target: any,
  methodName: string,
  descriptor: PropertyDescriptor
): void {
  const originalGetter = descriptor.get as Function;
  descriptor.get = function () {
    const value = originalGetter.call(this);
    return typeof value === "string" ? value.replace(" ", "_") : value;
  };
}

function MinLen(yoe: number): Function {
  return function (target: any, propertyName: string): void {
    let value: number = 0;
    const descriptor = {
      get: function (): number {
        return value;
      },
      set: (exp: number): void => {
        if (exp < yoe) throw new Error(`Minimum ${yoe} years required`);
        value = exp;
      },
    };
    Object.defineProperty(target, propertyName, descriptor);
  };
}

class Driver {
  @MinLen(4)
  public experience: number;
  constructor(
    public firstName: string,
    public lastName: string,
    experience: number
  ) {
    this.experience = experience;
  }
  @Underscore
  @Capitalize
  get fullName(): string {
    return `${this.firstName} ${this.lastName}`;
  }
}

try {
  const busDriver = new Driver("Howard", "Hisenberg", 3);
  console.log(busDriver.fullName);
  console.log(busDriver.experience);
} catch (error: any) {
  console.log(error.message);
}

// parameter decorators
type WatchedParameter = {
  methodName: string;
  methodIndex: number;
};

const watchedParameters: WatchedParameter[] = [];
function Watch(target: any, methodName: string, methodIndex: number): void {
  watchedParameters.push({
    methodName,
    methodIndex,
  });
}

class Vehicle {
  move(distance: number, @Watch speed?: string | number) {}
}

const car = new Vehicle();
console.log(watchedParameters);
