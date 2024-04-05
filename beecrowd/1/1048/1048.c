#include <stdio.h>

void ajustar(float salario, float percentual) {
    printf("\
Novo salario: %.2lf\n\
Reajuste ganho: %.2lf\n\
Em percentual: %.0lf %%\n",
salario * percentual + salario,
salario * percentual,
percentual * 100);

}

int main(void) {
    float salario;
    scanf("%f", &salario);

    if (salario > 2000.00) {
        ajustar(salario, 0.04);
    } else if (salario >= 1200.01) {
        ajustar(salario, 0.07);
    } else if (salario >= 800.01) {
        ajustar(salario, 0.10);
    } else if (salario >= 400.01) {
        ajustar(salario, 0.12);
    } else {
        ajustar(salario, 0.15);
    }

    return 0;
}
