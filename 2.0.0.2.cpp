#include <iostream>

auto main() -> int {
    int a, b, c;
    std::cin >> std::dec >> a;
    std::cin >> std::dec >> b;
    std::cin >> std::dec >> c;
    if(c == 0) {
        std::cerr << "Nie można dzielić przez 0\n";
        exit(1);
    }
    for(auto i = a; i < b; ++i) {
        if(i % c == 0)
            std::cout << i << "\n";
    }
}
