#include <stdio.h>
#include <math.h>

void bhaskara (double A, double B, double C) {
    double delta = pow(B, 2) - (4 * A * C);
    if (A == 0.0 || delta <= 0.0) {
        puts("Impossivel calcular");
    } else {
        printf("R1 = %.5lf\nR2 = %.5lf\n",
                (-B + sqrt(delta)) / (2 * A),
                (-B - sqrt(delta)) / (2 * A)
              );
    }
}

int main(void) {
    double n[3];
    scanf("%lf %lf %lf", &n[0], &n[1], &n[2]);
    bhaskara(n[0], n[1], n[2]);
    return 0;
}
