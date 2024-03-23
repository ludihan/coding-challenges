#include <stdio.h>

int main(void) {
    int horas, velMed;
    scanf("%d %d", &horas, &velMed);
    printf("%.3f\n", horas * velMed / 12.0);
    return 0;
}
