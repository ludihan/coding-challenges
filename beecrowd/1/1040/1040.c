#include <stdio.h>

int main(void) {
    double N[4];
    for (int i = 0;i < 4; i++) {
        scanf("%lf", &N[i]);
    }
    double media = ((N[0] * 2) + (N[1] * 3) + (N[2] * 4) + (N[3] * 1)) / 10;
    printf("Media: %.1f\n", (float)media);
    if (media >= 7.0) {
        puts("Aluno aprovado.");
    } else if (media < 5.0) {
        puts("Aluno reprovado.");
    } else {
        double exame, final;
        scanf("%lf", &exame);
        final = (exame + media) / 2;
        if (final < 4.9) {
            puts("Aluno reprovado.");
        } else {
            printf(
"\
Aluno em exame.\n\
Nota do exame: %.1lf\n\
Aluno aprovado.\n\
Media final: %.1lf\n\
", exame, final
                  );
        }

    }

    return 0;
}
