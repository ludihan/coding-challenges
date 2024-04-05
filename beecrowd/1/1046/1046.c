#include <stdio.h>

void printar(int horas) {
    printf("O JOGO DUROU %d HORA(S)\n", horas);
}

int main(void) {
    int inicial, final;
    scanf("%d %d", &inicial, &final);
    if (inicial < final) {
        printar(final - inicial);
    } else if(inicial > final) {
        printar((24 - inicial) + final);
    } else {
        printar(24);
    }
    return 0;
}
