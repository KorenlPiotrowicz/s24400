// 3.4.0.6

#include <iostream>
#include <string>
#include <cstring>

void memset(char *a, int c, size_t n) {
    for(int i = 0; i < n; ++i) {
        a[i] = c;
    }
}

int main() {
    char str[100];
    std::string a{"Hello World"};
    strcpy(str, a.c_str());
    std::cout << str << "\n";
    memset(str, 100, a.length());
    std::cout << str << "\n";

    return 0;
}