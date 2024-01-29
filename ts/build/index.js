"use strict";
var __decorate = (this && this.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (this && this.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (this && this.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};
var _a;
var _b;
// explicit type annotation
let num = 0;
// implicit type => any
let x;
// explicit type any
let doc = "mine";
doc = 21;
// array of any
let arr = [1, true, "fa"];
// array of single type
let list = [1, 2, 3];
// tuples can be two typically or more
let tuple = [1, true];
let tup = [1, true, "lir", false];
// enums - just like others
var Size;
(function (Size) {
    Size[Size["Small"] = 1] = "Small";
    Size[Size["Medium"] = 2] = "Medium";
    Size[Size["Large"] = 3] = "Large";
})(Size || (Size = {}));
const mySize = Size.Large; // 3
// functions and optional args
function printe(age) {
    let x = 10;
    if (age < 18)
        return -1;
    return 1 * x;
}
// objects & shapes & methods & readonly
let obj = {
    name: "more",
    file: false,
    retire: (date = new Date()) => console.log(date),
};
// type unoin => one of 'em
function weigh(weight) {
    if (typeof weight === "string")
        return parseInt(weight);
    else
        return weight;
}
const resize = {
    resize: () => console.log("resize"),
    drag: () => console.log("drag"),
};
const len = 50;
// optional member accessing operator
function getEmployee(emplyee) {
    return emplyee !== null && emplyee !== void 0 ? emplyee : undefined;
}
// Nullish coalescing operator ?? VVVVV>>>>>IIIIIII
// instead of: !employee ? somevalue : employee instead=> employee ?? 30
// type assersion
let commonWeight = weigh("10kg");
let otherWeight = weigh(10);
// unknown type
function printea(object) {
    if (typeof object === "string")
        console.log(object.length);
    if (typeof object === "number")
        console.log(object.toString().length);
    if (object instanceof Boolean)
        console.log(object);
    return;
}
// never type
function thrower(message) {
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
    constructor(id, name, _amount, location, _ssn) {
        this.id = id;
        this.name = name;
        this._amount = _amount;
        this.location = location;
        this._ssn = _ssn;
        if (typeof id !== "number")
            throw new Error("Invalid id...");
        this._ssn;
    }
    deposit(amount) {
        if (amount <= 0)
            throw new Error("Invalid amount!");
        this._amount += amount;
    }
    //getter
    get amount() {
        return this._amount;
    }
    //setter
    set ssn(ssn) {
        if (ssn <= 0)
            throw new Error("Invalid ssn");
        this._ssn = ssn;
    }
}
// creating objects instances
const newAccount = new Account(1, "Mosh", 20);
newAccount.deposit(20);
// static props
class Ride {
    start() {
        Ride._rides++;
    }
    stop() {
        Ride._rides--;
    }
    static get rides() {
        return Ride._rides;
    }
}
Ride._rides = 0;
const rideOne = new Ride();
const rideTwo = new Ride();
rideOne.start();
rideTwo.start();
rideTwo.start();
class Person {
    constructor(firstName, lastName) {
        this.firstName = firstName;
        this.lastName = lastName;
    }
    get fullName() {
        return this.firstName + " " + this.lastName;
    }
}
class Professor extends Person {
    get fullName() {
        return "Professor ";
    }
}
// generic classes
class KeyValuePair {
    constructor(key, value) {
        this.key = key;
        this.value = value;
    }
}
const kv = new KeyValuePair(39, null);
// generic functions
function gener(value) {
    return [value];
}
const vegen = gener(+"3"); // array of numbers
function fetche() {
    return { data: null, error: null };
}
const data = fetche();
(_a = data.data) === null || _a === void 0 ? void 0 : _a.price;
const citizen = {
    name: "howard",
    age: 32,
};
const optionalCitizen = {
    name: "kyle",
};
const nullableCitizen = {
    name: null,
    age: 32,
};
// decorator factory
function SelectorComponent(options) {
    return function (constructor) {
        // console.log("Component decorator is called...");
        // prototype
        constructor.prototype.id = new Date();
        constructor.prototype.options = options;
        constructor.prototype.insertIntoDOM = function () {
            console.log("inserted into DOM");
        };
    };
}
// decorator composition
function Pipe(constructor) {
    // console.log("Pipe decorator is called...");
    constructor.prototype.pipe = true;
}
// pipe is called first
let ProfileComponent = class ProfileComponent {
};
ProfileComponent = __decorate([
    SelectorComponent({ selector: "#users-id" }),
    Pipe
], ProfileComponent);
const profile = new ProfileComponent();
function Log(target, methodName, descriptor) {
    const originalMethod = descriptor.value;
    descriptor.value = function (...args) {
        console.log("Hello ");
        originalMethod.call(this, ...args);
        console.log("How are you doing");
    };
}
class Robot {
    call(name) {
        console.log(name);
    }
}
__decorate([
    Log,
    __metadata("design:type", Function),
    __metadata("design:paramtypes", [typeof (_b = typeof T !== "undefined" && T) === "function" ? _b : Object]),
    __metadata("design:returntype", void 0)
], Robot.prototype, "call", null);
function Capitalize(target, methodName, descriptor) {
    const originalGetter = descriptor.get;
    descriptor.get = function () {
        const value = originalGetter.call(this);
        return typeof value === "string" ? value.toUpperCase() : value;
    };
}
function Underscore(target, methodName, descriptor) {
    const originalGetter = descriptor.get;
    descriptor.get = function () {
        const value = originalGetter.call(this);
        return typeof value === "string" ? value.replace(" ", "_") : value;
    };
}
function MinLen(yoe) {
    return function (target, propertyName) {
        let value = 0;
        const descriptor = {
            get: function () {
                return value;
            },
            set: (exp) => {
                if (exp < yoe)
                    throw new Error(`Minimum ${yoe} years required`);
                value = exp;
            },
        };
        Object.defineProperty(target, propertyName, descriptor);
    };
}
class Driver {
    constructor(firstName, lastName, experience) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.experience = experience;
    }
    get fullName() {
        return `${this.firstName} ${this.lastName}`;
    }
}
__decorate([
    MinLen(4),
    __metadata("design:type", Number)
], Driver.prototype, "experience", void 0);
__decorate([
    Underscore,
    Capitalize,
    __metadata("design:type", String),
    __metadata("design:paramtypes", [])
], Driver.prototype, "fullName", null);
try {
    const busDriver = new Driver("Howard", "Hisenberg", 3);
    console.log(busDriver.fullName);
    console.log(busDriver.experience);
}
catch (error) {
    console.log(error.message);
}
const watchedParameters = [];
function Watch(target, methodName, methodIndex) {
    watchedParameters.push({
        methodName,
        methodIndex,
    });
}
class Vehicle {
    move(distance, speed) { }
}
__decorate([
    __param(1, Watch),
    __metadata("design:type", Function),
    __metadata("design:paramtypes", [Number, Object]),
    __metadata("design:returntype", void 0)
], Vehicle.prototype, "move", null);
const car = new Vehicle();
console.log(watchedParameters);
//# sourceMappingURL=index.js.map