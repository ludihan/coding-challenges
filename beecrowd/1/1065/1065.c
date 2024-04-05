#include <stdio.h>

int main(void) {
    int input;
    int even = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &input);
        if (input % 2 == 0) {
            even++;
        }
    }
    printf("%d valores pares\n", even);
    return 0;
}
