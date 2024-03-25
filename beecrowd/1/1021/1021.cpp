#include <iostream>
#include <iomanip>

int main() {
    double dinheiroF;
    int dinheiro;
    int valores[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
    std::cin >> dinheiroF;
    dinheiro = (int) (dinheiroF * 100);
    std::cout << "NOTAS:\n" << std::fixed << std::setprecision(2);
    for (int i = 0; i < 12; i++) {
        int v = valores[i];
        valores[i] = dinheiro / v;
        dinheiro -= valores[i] * v;
        if (i < 6) {
            std::cout << valores[i] << " nota(s) de R$ " << (double) v / 100 << std::endl;
        } else {
            if (i == 6) {
                std::cout << "MOEDAS:\n";
            }
            std::cout << valores[i] << " moeda(s) de R$ " << (double) v / 100 << std::endl;
        }
    }
}
