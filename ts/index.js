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
function print(age) {
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
// type unoin
function weigh(weight) {
    if (typeof weight === "string")
        return parseInt(weight);
    else
        return weight;
}
console.log(mySize);
console.log(print(10));
obj.retire(new Date());
console.log(weigh("10kg"));
console.log(weigh(10));
