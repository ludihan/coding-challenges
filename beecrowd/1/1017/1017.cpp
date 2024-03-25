#include <iostream>
#include <iomanip>

int main() {
    int horas, velMed;
    std::cin >> horas >> velMed;
    std::cout << std::fixed << std::setprecision(3)
        << horas * velMed / 12.0 << std::endl;
}
