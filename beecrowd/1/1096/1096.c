#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 9; i += 2) {
        printf("I=%d J=%d\nI=%d J=%d\nI=%d J=%d\n", i, 7, i, 6, i, 5);
    }
    return 0;
}
