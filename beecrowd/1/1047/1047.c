#include <stdio.h>

void printar(int horas, int minutos) {
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
}

int main(void) {
    int horaInicial, minutoInicial, horaFinal, minutoFinal;
    scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);
    int inicial = minutoInicial + horaInicial * 60;
    int final = minutoFinal + horaFinal * 60;
    int duracaoTotal = 24 * 60;
    if (inicial < final) {
        printar((final - inicial) / 60, (final - inicial) % 60);
    } else if(inicial > final) {
        printar((duracaoTotal - inicial + final) / 60,
                (duracaoTotal - inicial + final) % 60);
    } else {
        printar(24, 0);
    }
    return 0;
}
