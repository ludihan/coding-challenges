#include <stdio.h>
#include <stdlib.h>

// TODO

struct Position {
    int N;
    int M;
};

struct Size {
    int N;
    int M;
};

void pintar(char **c, struct Position pos, struct Size *size) {
    printf("%d %d", pos.N, pos.M);
    if (pos.N >= 0 && pos.N < size->N
            && pos.M >= 0 && pos.M < size->M) {
        switch(c[pos.N][pos.M]) {
            case '.':
                if (c[pos.N - 1][pos.M] == 'o'
                        || (c[pos.N][pos.M - 1] == 'o' && c[pos.N + 1][pos.M - 1] == '#')
                        || (c[pos.N][pos.M + 1] == 'o' && c[pos.N + 1][pos.M + 1] == '#')) {
                    c[pos.N][pos.M] = 'o';
                }
                break;
            case 'o':
                pintar(c, (struct Position){pos.N + 1, pos.M    }, size);
                pintar(c, (struct Position){pos.N    , pos.M + 1}, size);
                pintar(c, (struct Position){pos.N    , pos.M - 1}, size);
                break;
            case '#':
                break;
        }
    }
}

int main(void) {
    int N, M;


    scanf("%d %d ", &N, &M);

    struct Size size = {
        N,
        M,
    };

    char **c = malloc(sizeof(char *) * N);
    for (int i = 0; i < N; i++) {
        c[i] = malloc(sizeof(char) * M);
    }

    struct Position initialPos;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf(" %c", &c[i][j]);
        }
    }


    for (int i = 0; i < N; i++) {
        if (c[0][i] == 'o') {
            initialPos.N = 0;
            initialPos.M = i;
        }
    }

    pintar(c, initialPos, &size);

    puts("#######################\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            putchar(c[i][j]);
        }
        putchar('\n');
    }

    for (int i = 0; i < N; i++) {
        free(c[i]);
    }
    free(c);

    return 0;
}
