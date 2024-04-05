#include <stdio.h>

int main(void) {
    double input;
    int pos = 0;
    for (int i = 0; i < 6; i++) {
        scanf("%lf", &input);
        if (input > 0) {
            pos++;
        }
    }
    printf("%d valores positivos\n", pos);
    return 0;
}
