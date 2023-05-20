//variaveis que armazenam os valores para calculo

var a = 1;
var b = 2;

//operações

function soma(a, b){
    return a + b;
}
function multi(a, b){
    return a * b;
}
function sub(a, b){
    return a - b;
}
function div(a,b){
    return a / b;
}

console.log("A soma dos números", a, "e", b, "é:", (soma(a,b)));

console.log("\nA multiplicação dos números", a, "e", b, "é:", (multi(a,b)));

console.log("\nA subtração dos números", a, "e", b, "é:", (sub(a,b)));

console.log("\nA divisão dos números", a, "e", b, "é:", (div(a,b)));
