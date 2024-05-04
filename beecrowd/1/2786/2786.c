#include <stdio.h>

int main(void) {
    int L, C;
    scanf("%d %d", &L, &C);
    printf("%d\n%d\n",
            (L * C) + ((L - 1) * (C - 1)),
            2 * (L - 1) + 2 * (C - 1)
            );
    return 0;
}
