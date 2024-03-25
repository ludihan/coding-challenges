#include <stdio.h>

int main(void) {
    double dinheiroF;
    int dinheiro;
    int valores[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
    scanf("%lf", &dinheiroF);
    dinheiro = (int) (dinheiroF * 100);
    puts("NOTAS:");
    for (int i = 0; i < 12; i++) {
        int v = valores[i];
        valores[i] = dinheiro / v;
        dinheiro -= valores[i] * v;
        if (i < 6) {
            printf("%d nota(s) de R$ %.2f\n", valores[i], (double) v / 100);
        } else {
            if (i == 6) {
                puts("MOEDAS:");
            }
            printf("%d moeda(s) de R$ %.2f\n", valores[i], (double) v / 100);
        }
    }
}
