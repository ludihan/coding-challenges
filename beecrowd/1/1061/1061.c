#include <stdio.h>
int getTempo();

void showDuracao(int diaInicial, int diaFinal);

int main(void) {
    int diaInicial, diaFinal;

    diaInicial = getTempo();
    diaFinal = getTempo();

    showDuracao(diaInicial, diaFinal);

    return 0;
}

int getTempo() {
    int dia, hora, minuto, segundo;
    scanf(" Dia %d", &dia);
    scanf(" %d : %d : %d", &hora, &minuto, &segundo);

    return dia * 24 * 60 * 60
        + hora * 60 * 60
        + minuto * 60
        + segundo;
}

void showDuracao(int diaInicial, int diaFinal) {
    int diferenca = diaFinal - diaInicial;
    int dias = diferenca / 86400;
    int horas = (diferenca - dias * 86400) / 3600;
    int minutos = ((diferenca - dias * 86400) - horas * 3600) / 60;
    int segundos = (((diferenca - dias * 86400) - horas * 3600) - minutos * 60);
    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);
}
