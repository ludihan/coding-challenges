#include <iostream>
#include <iomanip>
#include <ostream>
#include <cmath>

int main() {
    int a;
    std::setprecision(1);
    std::cin >> a;
    std::cout << "A=" << 3.14159 * std::pow(a, 2) << std::endl;
    return 0;
}
