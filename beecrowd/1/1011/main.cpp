#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double R;
    std::cin >> R;
    std::cout << std::fixed << std::setprecision(3)
        << "VOLUME = " << (4.0/3) * 3.14159 * std::pow(R, 3) << std::endl;
    return 0;
}
