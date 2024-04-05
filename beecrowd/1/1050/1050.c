#include <stdio.h>

int main(void) {
    char *cidades[] = {
        "Brasilia",
        "Salvador",
        "Sao Paulo",
        "Rio de Janeiro",
        "Juiz de Fora",
        "Campinas",
        "Vitoria",
        "Belo Horizonte",
    };
    int DDD[] = {
        61,
        71,
        11,
        21,
        32,
        19,
        27,
        31,
    };

    int input;
    scanf("%d", &input);

    int inside = 0;
    int index = 0;
    for (long unsigned int i = 0; i < sizeof(DDD) / sizeof(DDD[0]); i++) {
        if (input == DDD[i]) {
            inside = 1;
            index = i;
        }
    }
    puts(inside ? cidades[index] : "DDD nao cadastrado");
    return 0;
}
