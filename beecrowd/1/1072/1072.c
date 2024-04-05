#include <stdio.h>

int main(void) {
    int in = 0;
    int out = 0;
    int n, tmp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &tmp);
        if (tmp >= 10 && tmp <= 20) {
            in++;
        } else {
            out++;
        }
    }
    printf("%d in\n%d out\n", in, out);
    return 0;
}
