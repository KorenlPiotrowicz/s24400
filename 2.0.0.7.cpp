#include <iostream>

auto main() -> int {
    int limit, dzielnik;
    std::cout << "Podaj limit i dzielnik: ";
    std::cin >> std::dec >> limit >> dzielnik;
    int sum = 0;
    for(auto i = 0; i <= limit; ++i) {
        if(i % dzielnik == 0)
            sum += i;
    }
    std::cout << sum << "\n";
}
