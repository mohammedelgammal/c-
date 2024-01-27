"use strict";
var _a;
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
function print(age) {
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
    return emplyee;
}
console.log(mySize);
console.log(print(10));
obj.retire(new Date());
console.log(weigh("10kg"));
console.log(weigh(12));
console.log((_a = getEmployee()) === null || _a === void 0 ? void 0 : _a.name); // undefined
//# sourceMappingURL=index.js.map