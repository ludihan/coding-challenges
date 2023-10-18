#include <stdio.h>
#include <math.h>

int main(void) {
    double R;
    scanf("%lf", &R);
    printf("VOLUME = %.3lf\n",(4.0/3) * 3.14159 * pow(R, 3) );
    return 0;
}
