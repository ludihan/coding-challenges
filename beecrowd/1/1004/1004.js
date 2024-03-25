var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

console.log("PROD =", parseInt(lines.shift()) * parseInt(lines.shift()))
