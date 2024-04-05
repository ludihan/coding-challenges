#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    puts(b % a == 0 || a % b == 0 ? "Sao Multiplos" : "Nao sao Multiplos");
    return 0;
}
