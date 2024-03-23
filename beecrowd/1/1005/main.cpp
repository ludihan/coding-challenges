#include <iomanip>
#include <iostream>

int main() {
    double A, B;
    std::cout << std::fixed << std::setprecision(5);
    std::cin >> A >> B;
    std::cout << "MEDIA = " << (A * 3.5 + B * 7.5) / 11 << std::endl;
    return 0;
}
