let generateur_maximize = m => v => v > m ? m : v;

let maximize_3_os = generateur_maximize(3);
let maximize_4_os = generateur_maximize(4);

console.log(maximize_3_os(10));
console.log(maximize_4_os(2));
