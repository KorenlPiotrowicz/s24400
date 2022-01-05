#include <iostream>

auto main() -> int {
    int a, b;
    std::cin >> std::dec >> a;
    std::cin >> std::dec >> b;
    for(auto i = a; i < b; ++i)
        std::cout << i << "\n";
}
