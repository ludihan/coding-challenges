#include <iomanip>
#include <iostream>

int main() {
    double num[12][12];
    double total = 0;
    int n = 0;
    char op;
    std::cin >> op;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            std::cin >> num[i][j];
        }
    }

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (12 - i <= j) {
                n++;
                total += num[i][j];
            }
        }
    }

    std::cout << std::fixed << std::setprecision(1)
        << (op == 'S' ? total : total / n) << std::endl;
    return 0;
}
