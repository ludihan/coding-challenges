var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};
var a = parseInt(prompt("valor de a"));
var b = parseInt(prompt("valor de b"));
console.log("X = " + parseInt(a+b));
