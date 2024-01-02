#include <stdio.h>

int main(void) {
    int numero,horas;
    double valor;

    scanf("%d\n%d\n%lf", &numero, &horas, &valor);
    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2lf\n", horas * valor);
    return 0;
}
