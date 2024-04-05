#include <stdio.h>

int main(void) {
    int input;
    scanf("%d", &input);
    for (int i = 1; i <= input; i += 2) {
        printf("%d\n", i);
    }
    return 0;
}
