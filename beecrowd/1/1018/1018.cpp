#include <iostream>

int main() {
    int dinheiro, quantidade;
    std::cin >> dinheiro;

    int notas[7] = {100, 50, 20, 10, 5, 2, 1};
    std::cout << dinheiro << std::endl;
    for (int i = 0; i < 7; i++) {
        quantidade = dinheiro / notas[i];
        dinheiro -= quantidade * notas[i];
        std::cout << quantidade << " nota(s) de R$ " << notas[i] << ",00" << std::endl;
    }
    return 0;
}
