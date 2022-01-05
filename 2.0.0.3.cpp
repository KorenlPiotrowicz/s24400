#include <iostream>

auto main() -> int {
    int a, b, s;
    std::cin >> std::dec >> a;
    std::cin >> std::dec >> b;
    std::cin >> std::dec >> s;
    if(s == 0) {
        std::cerr << "s nie może być równe 0\n";
        exit(1);
    }
    for(auto i = s < 0 ? b-1 : a; i < b && i >= a; i += s)
        std::cout << i << "\n";
}
