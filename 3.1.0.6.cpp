#include <iostream>
#include <array>

int const N = 10;

auto main() -> int {
    std::array<int, N> arr;
    for(auto i = 0; i < N; ++i)
        arr.at(i) = 19+10*i;
    for(auto const &el : arr) {
        std::cout << el << "\n";
    }
    std::cout << "Jaki element tablicy znaleźć: ";
    int x;
    std::cin >> std::dec >> x;
    for(auto i = 0; i < N; ++i) {
        if(x == arr.at(i)) {
            std::cout << i << "\n";
            return 0;
        }
    }
    std::cout << -1 << "\n";
}
