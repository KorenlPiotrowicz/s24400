#include <iostream>
#include <sstream>

auto main(int argc, char **argv) -> int {
    int a, b;
    for(auto i = 1; i < argc-1; ++i) {
        std::stringstream ss;
        ss << argv[i+1] << ' ' << argv[i];
        ss >> b;
        ss >> a;
        std::string tmp = a < b ? " < " : a == b ? " == " : " > ";
        i > 1 ? std::cout << tmp << b : std::cout << a << tmp << b;
    }
    std::cout << "\n";
}
