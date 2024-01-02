#include <stdio.h>

int main(void) {
    char nome[20];
    double salario,venda;
    scanf("%s\n%lf\n%lf", nome, &salario, &venda);
    printf("TOTAL = R$ %.2lf\n", salario + (venda * 0.15));
    return 0;
}
