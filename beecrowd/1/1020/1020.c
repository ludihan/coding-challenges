#include <stdio.h>

int main(void) {
    int d;
    scanf("%d", &d);
    printf("%d ano(s)\n", d / 365);
    d = d % 365;
    printf("%d mes(es)\n", d / 30);
    d = d % 30;
    printf("%d dia(s)\n", d);
    return 0;
}
