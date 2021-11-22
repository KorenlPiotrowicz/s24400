#include <iostream>
#include <vector>
using namespace std;

int max2(int a, int b);
int max3(int a, int b, int c);

int main()
{
    cout << max2(3, 10) << "\n";
    cout << max3(3, 10, 2) << "\n";
    cout << max3(1, 2, 3) << "\n";
    cout << max3(3, 2, 1) << "\n";
    cout << max3(1, 3, 2) << "\n";
    cout << max3(2, 3, 1) << "\n";

    return 0;
}

int max2(int a, int b){
    if (a > b){
        return a;
    } else
        return b;
}

int max3(int a, int b, int c){
    int bigger = max2(a, b);
    if (bigger > c) {
        return bigger;
    } else {
        return c;
    }
}