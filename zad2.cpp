// 3.4.0.2
#include <iostream>
#include <string>

void print(std::string &tmp) {
    std::cout << &tmp << " = " << tmp << "\n";
}

int main() {
    std::string a{"Some String"};
    print(a);
    return 0;
}