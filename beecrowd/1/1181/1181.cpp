#include <iostream>
#include <iomanip>

int main() {
    float num[12][12];
    float total;
    int linha;
    char op;
    std::cin >> linha >> op;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            std::cin >> num[i][j];
        }
    }

    for (int i = 0; i < 12; i++) {
        total += num[linha][i];
    }

    std::cout << std::fixed << std::setprecision(1);
    if (op == 'S') {
        std::cout << total << std::endl;
    } else {
        std::cout << total / 12 << std::endl;
    }
    return 0;
}
