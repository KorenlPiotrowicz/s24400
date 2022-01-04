#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  int n = 50;
  int A[n];

  int k;
  cout << "Podaj końcową wartość przedziału z którego mają być losowane liczby: ";
  cin >> k;

  for (int i = 0; i < n; i++){
    A[i] = rand() % (k + 1);
  }

  cout << "Elementy tablicy: ";

  for (int i = 0; i < n; i++){
    cout << A[i] << " ";
  }

  cout << "\n";

  return 0;
}
