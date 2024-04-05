#include <stdio.h>

int main(void) {
    int A, B, C, D;
    scanf("%d%d%d%d", &A, &B, &C, &D);
    puts (
        (B > C)
        &&
        (D > A)
        &&
        (C + D) > (A + B)
        &&
        (C > 0)
        &&
        (D > 0)
        &&
        (A % 2 == 0)
        ?
        "Valores aceitos"
        :
        "Valores nao aceitos"
    );
    return 0;
}
