#include <stdio.h>

int main(void) {
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    if (((C + B) > A) && ((A + C) > B && ((A + B) > C))) {
        printf ("Perimetro = %.1lf\n", A + B + C);
    } else {
        printf("Area = %.1lf\n", ((A + B) * C) / 2 );

    }
    return 0;
}
