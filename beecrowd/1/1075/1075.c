#include <stdio.h>

int main(void) {
    int input;
    scanf("%d", &input);
    for (int i = 2; i <= 10001; i += input) {
        printf("%d\n", i);
    }
    return 0;
}
