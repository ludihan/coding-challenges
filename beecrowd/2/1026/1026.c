#include <math.h>
#include <stdio.h>

int main(void) {
    while (1) {
        unsigned int a,b;
        if (scanf(" %u %u", &a, &b) == EOF) {
            break;
        }
        printf("%u\n", a ^ b);
    }
    return 0;
}
