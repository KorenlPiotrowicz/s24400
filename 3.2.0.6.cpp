#include <iostream>

using namespace std;

int functionXY(int a, int b);

int main()
{
    functionXY(3, 10);
    return 0;
}

int functionXY(int a, int b){
    a = 2 * a;
    b = b + 100;
    cout << "a: " << a << "\n";
    cout << "b: " << b << "\n";
    return a, b;
}