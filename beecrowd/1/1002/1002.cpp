#include <iostream>
#include <ostream>
#include <cmath>
#include <iomanip>

int main() {
    double a;
    std::cout << std::fixed << std::showpoint << std::setprecision(4);
    std::cin >> a;
    std::cout << "A=" << 3.14159 * std::pow(a, 2) << std::endl;
    return 0;
}
