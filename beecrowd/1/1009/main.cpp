#include <iostream>
#include <iomanip>

int main() {
    std::string nome;
    double salario, venda;
    std::cin >> nome;
    std::cin >> salario;
    std::cin >> venda;
    std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(2) << "TOTAL = R$ " << salario + venda * 0.15 << std::endl;
    return 0;
}
