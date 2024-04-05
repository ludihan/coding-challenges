#include <stdio.h>

int main() {
    double num[12][12];
    double total = 0;
    int n = 0;
    char op;
    scanf("%c", &op);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &num[i][j]);
        }
    }

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < (12 - (i + 1)); j++) {
            n++;
            total += num[i][j];
        }
    }

    printf("%.1f\n", op == 'S' ? total : total / n);
    return 0;
}
