function generateur_maximize(m){
    return function(v){
        return v > m ? m : v;
    }
}

let generateur_maximize_lambda = m => v => v > m ? m : v;

let maximize_3_os = generateur_maximize(3);
let maximize_4_os = generateur_maximize_lambda(4);

tab.map(maximize_3_os);
let res = maximize_3_os(10); 
res = maximize_3_os(2); 
generateur_maximize_lambda(4)(3);
