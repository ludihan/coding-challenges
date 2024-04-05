#include <stdio.h>
#include <stdlib.h>

int max(int a, int b, int c) {
    int tmp = a;
    if (b > tmp) {
        tmp = b;
    }
    if (c > tmp) {
        tmp = c;
    }
    return tmp;
}

int min(int a, int b, int c) {
    int tmp = a;
    if (b < tmp) {
        tmp = b;
    }
    if (c < tmp) {
        tmp = c;
    }
    return tmp;
}

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int numlist[3] = {min(a, b, c), 0, max(a, b ,c)};
    numlist[1] = (a + b +c) - numlist[0] - numlist[2];

    for (int i = 0; i < 3; i++) {
        printf("%d\n", numlist[i]);
    }
    printf("\n%d\n%d\n%d\n", a, b, c);
    return 0;
}
