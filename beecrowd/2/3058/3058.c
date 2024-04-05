#include <stdio.h>
#include <stdlib.h>

struct loja {
    double preco;
    double media;
    int grama;
};

int main(void) {
    int n;
    scanf("%d", &n);
    struct loja *lojas = malloc(sizeof(struct loja) * n);
    for (int i = 0; i < n; i++) {
        scanf("%lf %d", &lojas[i].preco, &lojas[i].grama);
        lojas[i].media = lojas[i].grama / lojas[i].preco;
    }

    int goatIndex = 0;
    double goatMedia = lojas[goatIndex].media;
    for (int i = 0; i < n; i++) {
        if (lojas[i].media > goatMedia) {
            goatMedia = lojas[i].media;
            goatIndex = i;
        }
    }
    printf("%.2lf\n", (1000.0 / lojas[goatIndex].grama) * lojas[goatIndex].preco);
    free(lojas);

    return 0;

}
