#include <stdio.h>

int main(void) {
    double X, Y;
    scanf("%lf%lf", &X, &Y);
    if (X == 0.0 && Y == 0.0) {
        puts("Origem");
    } else if (X == 0.0) {
        puts("Eixo Y");
    } else if (Y == 0.0) {
        puts("Eixo X");
    } else if (X > 0.0) {
        puts(Y > 0.0 ? "Q1" : "Q4");
    } else if (X < 0.0) {
        puts(Y > 0.0 ? "Q2" : "Q3");
    }
    return 0;
}
