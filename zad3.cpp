// 3.4.0.3
#include <iostream>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int a=1, b=2;

    std::cout << &a << ": " << a << ", " << &b << ": " << b << "\n";
    swap(&a, &b);
    std::cout << &a << ": " << a << ", " << &b << ": " << b << "\n";

    return 0;
}