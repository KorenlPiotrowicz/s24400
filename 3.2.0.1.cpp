#include <iostream>
using namespace std;
int main()
{
    int first = 33;
    int last = 127;
    char array[last-first] = {0};
    for (int i = 0; i + first < last; i++){
        array[i] = char(i + first);
    }

    for (int i = 0; i < sizeof(array); i++){
        cout << array[i];
    }

    return 0;
}