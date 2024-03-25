#include <iostream>
#include <iomanip>

int main() {
    int c[2], n[2];
    double v[2];
    std::cin >> c[0] >> n[0] >> v[0]
             >> c[1] >> n[1] >> v[1];
    std::cout << std::fixed << std::setprecision(2)
        << "VALOR A PAGAR: R$ " << n[0] * v[0] + n[1] * v[1] << std::endl;
    return 0;
}
