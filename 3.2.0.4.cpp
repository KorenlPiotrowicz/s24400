#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int input;
    vector<int> tab {0};
    while (input != 0){
        cout << "Podaj liczbę: ";
        cin >> input;
        tab.push_back(input);
    }
    tab.erase(tab.begin());

	for(int i = 0; i < tab.size() - 1; ++i)
		for(int j = 0; j < tab.size() - i - 1; ++j){
            if(tab.at(j) < tab.at(j+1))
			    swap(tab.at(j), tab.at(j + 1));
        }

    int i = 0;
    for (int n : tab) {
        cout << n << " ";
    }

    return 0;
}