#include <stdio.h>
#include <stdlib.h>

int maiorAB(int A, int B) {
    return ((A + B + abs(A - B))) / 2;
}

int main(void) {
    int num[3];
    int maior;
    scanf("%d %d %d%*c",&num[0], &num[1], &num[2]);
    maior = maiorAB(num[0],num[1]);
    maior = maiorAB(maior,num[2]);
    printf("%d eh o maior\n", maior);
    return 0;
}
