#include <stdio.h>

int main(void) {
    int segundos = 0;
    int tempo[3] = {60 * 60, 60, 1};
    scanf("%d", &segundos);
    for (int i = 0; i < 3; i++) {
        int v = tempo[i];
        tempo[i] = segundos / v;
        segundos -= tempo[i] * v;
    }
    printf("%d:%d:%d\n", tempo[0], tempo[1], tempo[2]);
    return 0;
}
