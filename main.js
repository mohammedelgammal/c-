Number.prototype[Symbol.iterator] = function* () {
  const digits = this.toString();
  for (let digit of digits) yield +digit;
};

const num = 566908;

console.log(...num);
