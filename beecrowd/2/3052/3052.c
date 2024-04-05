#include <stdio.h>
#include <stdlib.h>

//TODO
void colorir(int **c, int i_pos, int j_pos, int i_max, int j_max) {

}

int main(void) {
    int N, M;
    scanf("%d %d ", &N, &M);
    char **c = malloc(sizeof(char *) * N);
    for (int i = 0; i < N; i++) {
        c[i] = malloc(sizeof(char) * M);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            c[i][j] = getchar();
        }
        getchar();
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            putchar(c[i][j]);
        }
        putchar('\n');
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (c[i][j] == '.') {
                printf("%d %d\n", i, j);
                if (i > 0) {
                    if (c[i - 1][j] == 'o') {
                        c[i][j] = 'o';
                    }
                }

                if (i < N - 1) {
                    if (j > 0) {
                        puts("oii");
                        if (c[i][j - 1] == 'o' && c[i + 1][j - 1] == '#') {
                            c[i][j] = 'o';
                        }
                    }

                    if (j < M - 1) {
                        puts("oii2");
                        if (c[i][j + 1] == 'o' && c[i + 1][j + 1] == '#') {
                            c[i][j] = 'o';
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            putchar(c[i][j]);
        }
        putchar('\n');
    }

    //free
    for (int i = 0; i < N; i++) {
        free(c[i]);
    }
    free(c);

    return 0;
}
