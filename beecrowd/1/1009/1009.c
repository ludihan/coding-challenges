#include <stdio.h>

int main(void) {
    double salario,venda;
    scanf("%*s\n%lf\n%lf", &salario, &venda);
    printf("TOTAL = R$ %.2lf\n", salario + (venda * 0.15));
    return 0;
}
