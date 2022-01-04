#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Podaj rozmiar tablicy: ";
  cin >> n;

  int start;
  cout << "Podaj wartość startową: ";
  cin >> start;

  int A[n];

  for (int i = 0; i < n; i++){
    A[i] = start + i;
  }

  cout << "Elementy tablicy: ";

  for (int i = 0; i < n; i++){
    cout << A[i] << " ";
  }

  cout << "\n";

  return 0;
}
