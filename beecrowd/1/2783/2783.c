#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N, C, M;
    int falta = 0;
    scanf("%d %d %d ", &N, &C, &M);
    int *Cs = malloc(sizeof(int) * C);
    int *Ms = malloc(sizeof(int) * M);
    for (int i = 0; i < C; i++) {
        scanf("%d", &Cs[i]);
    }
    for (int i = 0; i < M; i++) {
        scanf("%d", &Ms[i]);
    }

    for (int i = 0; i < C; i++) {
        for (int j = 0; j < M; j++) {
            if (Cs[i] == Ms[j]) {
                falta++;
                break;
            }
        }
    }

    printf("%d\n", C - falta);
    free(Cs);
    free(Ms);
    return 0;
}
