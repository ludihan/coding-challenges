#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double max(double a, double b, double c) {
    double tmp = a;
    if (b > tmp) {
        tmp = b;
    }
    if (c > tmp) {
        tmp = c;
    }
    return tmp;
}

double min(double a, double b, double c) {
    double tmp = a;
    if (b < tmp) {
        tmp = b;
    }
    if (c < tmp) {
        tmp = c;
    }
    return tmp;
}

int main(void) {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double numlist[3] = {min(a, b, c), 0, max(a, b ,c)};
    numlist[1] = (a + b + c) - numlist[0] - numlist[2];
    a = numlist[2];
    b = numlist[1];
    c = numlist[0];

    if (a >= (b + c)) {
        puts("NAO FORMA TRIANGULO");
    } else {
        if (pow(a, 2) == pow(b, 2) + pow(c, 2)) { puts("TRIANGULO RETANGULO");   }
        if (pow(a, 2) > pow(b, 2) + pow(c, 2))  { puts("TRIANGULO OBTUSANGULO"); }
        if (pow(a, 2) < pow(b, 2) + pow(c, 2))  { puts("TRIANGULO ACUTANGULO");  }
        if (a == b ? b == c ? 1 : 0 : 0)        { puts("TRIANGULO EQUILATERO");  }
        if ((a == b && a != c && b != c) ||
            (b == c && c != a && b != a) ||
            (c == a && c != b && a != b))       { puts("TRIANGULO ISOSCELES"); }

    }
    return 0;
}
