#include <iostream>
#include <iomanip>

int main() {
    int numero, horas;
    double valor;

    std::cin >> numero >> horas >> valor;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "NUMBER = " << numero << std::endl;
    std::cout << "SALARY = U$ " << horas * valor << std::endl;
    return 0;
}
