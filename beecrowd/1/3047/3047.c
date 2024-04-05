#include <stdio.h>

int max(int A, int B, int C) {
    int max = A;
    if (B > max) {
        max = B;
    }
    if (C > max) {
        max = C;
    }
    return max;
}

int main(void) {
    int M, A, B;
    scanf("%d %d %d", &M, &A, &B);
    int C = M - (A + B);
    int n = max(A, B, C);
    printf("%d\n", n);
    return 0;
}
