#include <stdio.h>

int main(void) {
    int cobaias = 0;
    int coelhos = 0, ratos = 0, sapos = 0;
    int n;
    int tmp;
    char tipo;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %c", &tmp, &tipo);
        cobaias += tmp;
        switch (tipo) {
            case 'C':
                coelhos += tmp;
                break;
            case 'R':
                ratos += tmp;
                break;
            case 'S':
                sapos += tmp;
                break;
        }
    }

    printf("Total: %d cobaias\n", cobaias);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf %%\n", (double)coelhos / cobaias * 100);
    printf("Percentual de ratos: %.2lf %%\n", (double)ratos / cobaias * 100);
    printf("Percentual de sapos: %.2lf %%\n", (double)sapos / cobaias * 100);
    return 0;
}
