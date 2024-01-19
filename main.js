// let myModule = {
//   data: [],
//   render: () => {
//     console.log("render");
//   },
//   add: () => {},
//   remove: () => {},
// };

const myModule = (function () {
  const _data = [],
    _render = function () {
      console.log("render");
    },
    _add = function () {},
    _remove = function () {};
  return {
    render: _render,
  };
})();

myModule.render();
