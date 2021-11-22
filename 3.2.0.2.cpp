#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int input;
    vector<int> tab;
    while (input != 0){
        cout << "Podaj liczbę: ";
        cin >> input;
        tab.push_back(input);
    }

    int i = 0;
    for (int n : tab) {
        i = i + 1;
        cout << n << " ";
        if (i == 5){
            cout << "\n";
            i = 0;
        }
    }

    return 0;
}