#include <stdio.h>

int main(void) {
    int input;
    double a, b, c;
    scanf("%d", &input);
    for (int i = 0; i < input; i ++) {
        scanf("%lf", &a);
        scanf("%lf", &b);
        scanf("%lf", &c);
        printf("%.1lf\n", (a * 2 + b * 3 + c * 5) / 10);
    }
    return 0;
}
