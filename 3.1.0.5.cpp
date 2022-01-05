#include <iostream>
#include <array>

const int N = 10;

auto main() -> int {
    if(N <= 0) {
        std::cerr << "Niepoprawny rozmiar tablicy\n";
        exit(1);
    }
    std::array<int, N> arr;
    std::cout << "Rozmiar tablicy wynosi " << N << "\n";
    std::cout << "Podaj elementy tablicy: ";
    int tmp;
    for(auto i = 0; i < N; ++i) {
        std::cin >> std::dec >> tmp;
        arr.at(i) = tmp;
    }
    std::cout << "Podana tablica:\n[ ";
    for(auto const &el : arr) {
        std::cout << el << " ";
    }
    std::cout << "]\n";
    int m, n, m_in, n_in;
    m = arr[0];
    m_in = 0;
    n = arr[0];
    n_in = 0;
    for(auto i = 1; i < N; ++i) {
        if(m < arr[i]) {
            m = arr[i];
            m_in = i;
        }
        if(n > arr[i]) {
            n = arr[i];
            n_in = i;
        }
    }
    std::cout << "Indeks największej wartości: " << m_in << "\n";
    std::cout << "Indeks najmniejszej wartości: " << n_in << "\n";
}
