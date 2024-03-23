#include <iostream>

int main(void) {
    int segundos = 0;
    int tempo[3] = {60 * 60, 60, 1};
    std::cin >> segundos;
    for (int i = 0; i < 3; i++) {
        int v = tempo[i];
        tempo[i] = segundos / v;
        segundos -= tempo[i] * v;
    }
    std::cout << tempo[0] << ":" << tempo[1] << ":" << tempo[2] << std::endl;
    return 0;
}
