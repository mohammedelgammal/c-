var __extends = (this && this.__extends) || (function () {
    var extendStatics = function (d, b) {
        extendStatics = Object.setPrototypeOf ||
            ({ __proto__: [] } instanceof Array && function (d, b) { d.__proto__ = b; }) ||
            function (d, b) { for (var p in b) if (Object.prototype.hasOwnProperty.call(b, p)) d[p] = b[p]; };
        return extendStatics(d, b);
    };
    return function (d, b) {
        if (typeof b !== "function" && b !== null)
            throw new TypeError("Class extends value " + String(b) + " is not a constructor or null");
        extendStatics(d, b);
        function __() { this.constructor = d; }
        d.prototype = b === null ? Object.create(b) : (__.prototype = b.prototype, new __());
    };
})();
// explicit type annotation
var num = 0;
// implicit type => any
var x;
// explicit type any
var doc = "mine";
doc = 21;
// array of any
var arr = [1, true, "fa"];
// array of single type
var list = [1, 2, 3];
// tuples can be two typically or more
var tuple = [1, true];
var tup = [1, true, "lir", false];
// enums - just like others
var Size;
(function (Size) {
    Size[Size["Small"] = 1] = "Small";
    Size[Size["Medium"] = 2] = "Medium";
    Size[Size["Large"] = 3] = "Large";
})(Size || (Size = {}));
var mySize = Size.Large; // 3
// functions and optional args
function printe(age) {
    var x = 10;
    if (age < 18)
        return -1;
    return 1 * x;
}
// objects & shapes & methods & readonly
var obj = {
    name: "more",
    file: false,
    retire: function (date) {
        if (date === void 0) { date = new Date(); }
        return console.log(date);
    },
};
// type unoin => one of 'em
function weigh(weight) {
    if (typeof weight === "string")
        return parseInt(weight);
    else
        return weight;
}
var resize = {
    resize: function () { return console.log("resize"); },
    drag: function () { return console.log("drag"); },
};
var len = 50;
// optional member accessing operator
function getEmployee(emplyee) {
    return emplyee !== null && emplyee !== void 0 ? emplyee : undefined;
}
// Nullish coalescing operator ?? VVVVV>>>>>IIIIIII
// instead of: !employee ? somevalue : employee instead=> employee ?? 30
// type assersion
var commonWeight = weigh("10kg");
var otherWeight = weigh(10);
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
var Account = /** @class */ (function () {
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
    function Account(id, name, _amount, location, _ssn) {
        this.id = id;
        this.name = name;
        this._amount = _amount;
        this.location = location;
        this._ssn = _ssn;
        if (typeof id !== "number")
            throw new Error("Invalid id...");
        this._ssn;
    }
    Account.prototype.deposit = function (amount) {
        if (amount <= 0)
            throw new Error("Invalid amount!");
        this._amount += amount;
    };
    Object.defineProperty(Account.prototype, "amount", {
        //getter
        get: function () {
            return this._amount;
        },
        enumerable: false,
        configurable: true
    });
    Object.defineProperty(Account.prototype, "ssn", {
        //setter
        set: function (ssn) {
            if (ssn <= 0)
                throw new Error("Invalid ssn");
            this._ssn = ssn;
        },
        enumerable: false,
        configurable: true
    });
    return Account;
}());
// creating objects instances
var newAccount = new Account(1, "Mosh", 20);
newAccount.deposit(20);
// static props
var Ride = /** @class */ (function () {
    function Ride() {
    }
    Ride.prototype.start = function () {
        Ride._rides++;
    };
    Ride.prototype.stop = function () {
        Ride._rides--;
    };
    Object.defineProperty(Ride, "rides", {
        get: function () {
            return Ride._rides;
        },
        enumerable: false,
        configurable: true
    });
    Ride._rides = 0;
    return Ride;
}());
var rideOne = new Ride();
var rideTwo = new Ride();
rideOne.start();
rideTwo.start();
rideTwo.start();
var Person = /** @class */ (function () {
    function Person(firstName, lastName) {
        this.firstName = firstName;
        this.lastName = lastName;
    }
    Object.defineProperty(Person.prototype, "fullName", {
        get: function () {
            return this.firstName + " " + this.lastName;
        },
        enumerable: false,
        configurable: true
    });
    return Person;
}());
var Professor = /** @class */ (function (_super) {
    __extends(Professor, _super);
    function Professor() {
        return _super !== null && _super.apply(this, arguments) || this;
    }
    Object.defineProperty(Professor.prototype, "fullName", {
        get: function () {
            return "Professor " + _super.prototype.firstName;
        },
        enumerable: false,
        configurable: true
    });
    return Professor;
}(Person));
var professor = new Professor("Amy", "Floyd");
console.log(professor.fullName);
console.log("erer");
