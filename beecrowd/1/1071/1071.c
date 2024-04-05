#include <stdio.h>

int main(void) {
    int a, b, tmp;
    scanf("%d %d", &a, &b);
    if (a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    int n = 0;
    for (int i = a + 1; i < b; i++) {
        if (i % 2 != 0) {
            n += i;
        }
    }

    printf("%d\n", n);
    return 0;
}
