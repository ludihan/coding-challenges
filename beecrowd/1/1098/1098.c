#include <stdio.h>

//TODO

int main(void) {
    int j = 7;
    for (double i = 0; i <= 9; i += 2) {
        printf("I=%d J=%d\nI=%d J=%d\nI=%d J=%d\n", i, j, i, j - 1, i, j - 2);
        j += 2;
    }
    return 0;
}
