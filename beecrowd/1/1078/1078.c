#include <stdio.h>

int main(void) {
    int input;
    scanf("%d", &input);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, input, i * input);
    }
    return 0;
}
