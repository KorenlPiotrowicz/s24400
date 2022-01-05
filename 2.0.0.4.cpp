#include <iostream>
#include <cmath>

auto is_prime(int a) -> bool {
    double b = (double)a;
    b = sqrt(b);
    if(a == 2 || a == 3)
        return true;
    if(a == 0 || a == 1 || a%2 == 0)
        return false;
    int i = 3;
    while(i < a) {
        if(a%i == 0)
            return false;
        i += 2;
    }
    return true;
}

auto main() -> int {
    int x;
    std::cin >> std::dec >> x;
    is_prime(x) ? std::cout << "Jest liczbą pierwszą\n"
        : std::cout << "Nie jest liczbą pierwszą\n";
}
