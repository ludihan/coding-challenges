#include <iostream>
#include <iomanip>

int main () {

    int c, total = 0, coelho = 0, rato = 0, sapo = 0;
    std::cin >> c;

    for (int i = 0; i < c; i++) {
        int quantia;
        char tipo;
        std::cin >> quantia >> tipo;

        total += quantia;
        if (tipo == 'C') {
            coelho += quantia;
        } else if (tipo == 'R') {
            rato += quantia;
        } else if (tipo == 'S') {
            sapo += quantia;
        }
    }

    float porcentagem_coelho = (coelho * 100.0) / total;
    float porcentagem_rato = (rato * 100.0) / total;
    float porcentagem_sapo = (sapo * 100.0) / total;

    std::cout << std::fixed << std::setprecision(2);
    std::cout <<"Total: " << total << " cobaias" << std::endl
        << "Total de coelhos: " << coelho << std::endl
        << "Total de ratos: " << rato << std::endl
        << "Total de sapos: " << sapo << std::endl
        << "Percentual de coelhos: " << porcentagem_coelho << " %" << std::endl
        << "Percentual de ratos: " << porcentagem_rato << " %" << std::endl
        << "Percentual de sapos: " << porcentagem_sapo << " %" << std::endl;

    return 0;
}
