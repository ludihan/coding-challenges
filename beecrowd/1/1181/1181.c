#include <stdio.h>

int main() {
    float num[12][12];
    float total;
    int linha;
    char op;
    scanf("%d%*c%c", &linha, &op);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &num[i][j]);
        }
    }

    for (int i = 0; i < 12; i++) {
        total += num[linha][i];
    }


    if (op == 'S') {
        printf("%.1f\n", total);
    } else {
        printf("%.1f\n", total / 12);
    }
    return 0;
}
