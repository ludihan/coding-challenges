var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function max(A, B, C) {
    let m = A;
    if (B > m) {
        m = B;
    }
    if (C > m) {
        m = C;
    }
    return m;
}

let M, A, B;
M = parseInt(lines.shift());
A = parseInt(lines.shift());
B = parseInt(lines.shift());
let C = M - (A + B);
let n = max(A, B, C);
console.log(n);
