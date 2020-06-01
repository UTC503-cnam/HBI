function maximize_3(v){
    if (v > 3)
        return 3;
    else
        return v;
}

function maximize_4(v){
    if (v > 4)
        return 4;
    else
        return v;
}

let maximize_3_lambda = v => v > 3 ? 3 : v;
let maximize_4_lambda = v => v > 4 ? 4 : v;

