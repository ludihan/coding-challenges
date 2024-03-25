#include <stdio.h>
#include <math.h>

int main(void) {
    double A,B,C;
    scanf("%lf %lf %lf%*c", &A, &B, &C);
    printf("TRIANGULO: %.3lf\n",(A*C)/2);
    printf("CIRCULO: %.3lf\n",3.14159 * pow(C,2));
    printf("TRAPEZIO: %.3lf\n",((A+B) * C)/2);
    printf("QUADRADO: %.3lf\n",B*B);
    printf("RETANGULO: %.3lf\n",A*B);
    return 0;
}
