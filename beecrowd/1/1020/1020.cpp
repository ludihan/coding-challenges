#include <iostream>

int main() {
    int d;
    std::cin >> d;
    std::cout << d / 365 << " ano(s)" << std::endl;
    d = d % 365;
    std::cout << d / 30 << " mes(es)" << std::endl;
    d = d % 30;
    std::cout << d << " dia(s)" << std::endl;
    return 0;
}
