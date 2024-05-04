#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// TODO
#define LIMIT 10e12

long long bin(long long n) {
    char convert[20];
    long long tmp = n;
    int j = 2;

    sprintf(convert, "%lld", tmp);
    int len = strlen(convert);

restart:
    if (tmp < LIMIT) {
        for (int i = 0; i < len; i++) {
            if (convert[i] == '1' || convert[i] == '0') {
                continue;
            } else {
                tmp = j * n;
                j++;
                sprintf(convert, "%lld", tmp);
                len = strlen(convert);
                goto restart;
            }
        }
    }

    return tmp < LIMIT ? tmp : -1;
}

int main(void) {
    long long n;
    while (scanf("%lld", &n) != EOF) {
        printf("%lld\n", bin(n));
    }
    return 0;
}
