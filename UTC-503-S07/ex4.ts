let numbers = [100, 34, 5, 67, 72];

interface Array<T> {
    min(): T;
    max(): T;
}

Array.prototype.min = function<T>(){
    let compute_min = arr => i => arr.length == 0?null:arr.length==1?arr[0]:i==arr.length - 1?arr[i]:Math.min(arr[i], compute_min(arr)(i + 1));
    return compute_min(this)(0);
}

Array.prototype.max = function<T>(){
    let compute_max = arr => i => arr.length == 0?null:arr.length==1?arr[0]:i==arr.length - 1?arr[i]:Math.max(arr[i], compute_max(arr)(i + 1));
    return compute_max(this)(0);
}


let minimum = numbers.min();
let maximum = numbers.max();

console.log(`Min is ${minimum}, max is ${maximum}`);
