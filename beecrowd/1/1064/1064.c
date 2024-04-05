#include <stdio.h>

int main(void) {
    double input;
    double total = 0;
    int pos = 0;
    for (int i = 0; i < 6; i++) {
        scanf("%lf", &input);
        if (input > 0) {
            total += input;
            pos++;
        }
    }
    printf("%d valores positivos\n%.1lf\n", pos, total / pos);
    return 0;
}
