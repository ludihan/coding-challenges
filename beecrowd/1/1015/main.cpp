#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double x[2], y[2];
    std::cin >> x[0] >> y[0] >> x[1] >> y[1];
    std::cout << std::fixed << std::setprecision(4)
        << std::sqrt(
                std::pow(x[1] - x[0], 2) +
                std::pow(y[1] - y[0], 2)
                )
            << std::endl;
    return 0;
}
