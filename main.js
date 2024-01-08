Object.prototype[Symbol.iterator] = function () {
  let index = 0;
  const entries = Object.entries(this);
  return {
    next() {
      return index < entries.length
        ? { value: [entries[index][0], entries[index++][1]], done: false }
        : { done: true };
    },
  };
};

const obj = {
  name: "ali",
  age: 28,
  country: "syria",
};

for (let [key, value] of obj) console.log(key, value);
