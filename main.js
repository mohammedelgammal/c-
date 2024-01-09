Number.prototype[Symbol.iterator] = function () {
  const digits = this.toString();
  let index = digits.length - 1;
  return {
    next() {
      if (index < 0) return { done: true };
      return { value: +digits[index--], done: false };
    },
  };
};

const num = 566908;

for (let digit of num) console.log(digit);
