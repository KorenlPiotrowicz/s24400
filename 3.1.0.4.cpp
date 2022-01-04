#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  int n = 10;
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

  int suma = 0;
  for (int i = 0; i < n; i++){
     suma = suma + A[i];
  }

  cout << "Suma elementów powyższej tablicy wynosi: " << suma << "\n";

  return 0;
}
