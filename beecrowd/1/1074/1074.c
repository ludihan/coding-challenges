#include <stdio.h>

int main(void) {
    int n;
    int num;
    char *a, *b;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);

        if (num == 0) {
            puts("NULL");
            continue;
        } else if (num < 0) {
            b = "NEGATIVE";
        } else if (num > 0) {
            b = "POSITIVE";
        }

        if (num % 2 == 0 && num != 0) {
            a = "EVEN";
        } else {
            a = "ODD";
        }


        printf("%s %s\n", a, b);
    }
    return 0;
}
