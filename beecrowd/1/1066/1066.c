#include <stdio.h>

int main(void) {
    int input;
    int even = 0;
    int odd = 0;
    int pos = 0;
    int neg = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &input);
        if (input % 2 == 0) {
            even++;
        } else {
            odd++;
        }

        if (input > 0) {
            pos++;
        }

        if (input < 0){
            neg++;
        }
    }
    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
    return 0;
}
