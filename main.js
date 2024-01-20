function f(n, m) {
  return arguments.length === f.length;
}

console.log( f(1));
console.log( f(1, 2));
console.log( f(1, 2, 3));
