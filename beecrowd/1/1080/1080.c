#include <stdio.h>

int main(void) {
    int input, index, maior;
    scanf("%d", &input);
    maior = input;
    for (int i = 2; i <= 100; i ++) {
        scanf("%d", &input);
        if (input > maior) {
            maior = input;
            index = i;
        }
    }
    printf("%d\n%d\n", maior, index);
    return 0;
}
