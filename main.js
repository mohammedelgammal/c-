Object.prototype[Symbol.iterator] = function* () {
  for (let key in this) yield [key, this[key]];
};

const person = {
  name: "ali",
  age: 28,
  country: "Syria",
};

for (let [key, val] of person) console.log(key, val);
