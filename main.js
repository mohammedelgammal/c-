// determine if the number is an integer
const isInt = function (n) {
  return !isNaN(n) && parseInt(n) === n;
};

console.log(isInt(3));
console.log(isInt(3.5));
console.log(isInt(9));
