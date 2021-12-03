// 3.4.0.1
 
#include <iostream>
#include <string>
 
int main() {
    // std::string name{"123 123"};
    // std::string *ptr = &name;
    // std::cout << "Wartość: " << *ptr << "\n";
    // std::cout << "Adres: " << ptr << "\n";
    // std::cout << "Długość: " << ptr->size() << "\n";
 
    std::string name{"123 123"};
    const char *ptr = name.data();
    std::cout << "Wartość: " << ptr << "\n";
    std::cout << "Adres: " << &ptr << "\n";
    unsigned len = 0;
    while(*ptr) {
        len++;
        ptr++;
    }
    std::cout << "Długość: " << len << "\n";
}