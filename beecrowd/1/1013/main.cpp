#include <iostream>
#include <cmath>

int maiorAB(int A, int B) {
    return ((A + B + std::abs(A - B))) / 2;
}

int main() {
    int maior, num[3];
    std::cin >> num[0] >> num[1] >> num[2];
    maior = maiorAB(num[0], num[1]);
    maior = maiorAB(maior, num[2]);
    std::cout << maior << " eh o maior" << std::endl;
    return 0;
}
