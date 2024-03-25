#include <stdio.h>

int main(void) {
    int dinheiro, quantidade;
    scanf("%d", &dinheiro);

    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    printf("%d\n", dinheiro);
    for (int i = 0; i < 7; i++) {
        quantidade = dinheiro / notas[i];
        dinheiro -= quantidade * notas[i];
        printf("%d nota(s) de R$ %d,00\n", quantidade, notas[i]);
    }
    return 0;
}
