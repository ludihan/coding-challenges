#include <stdio.h>

int main(void) {
    double num;
    scanf("%lf", &num);
    if (num >= 0 && num <= 25) {
        puts("Intervalo [0,25]");
    } else if (num > 25 && num <= 50) {
        puts("Intervalo (25,50]");
    } else if (num > 50 && num <= 75) {
        puts("Intervalo (50,75]");
    } else if (num > 75 && num <= 100) {
        puts("Intervalo (75,100]");
    } else {
        puts("Fora de intervalo");
    }
    return 0;
}
