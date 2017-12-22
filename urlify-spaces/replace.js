function replace(str) {
  return str.split(' ').join('%20');
}

let a = "es im anush hayastani";
console.log(replace(a));
