#include <stdio.h>

int main(void) {
    int input;
    scanf("%d", &input);
    if (input % 2 == 0) {
        input++;
    }
    for (int i = input; i <= input + 10; i += 2) {
        printf("%d\n", i);
    }
    return 0;
}
