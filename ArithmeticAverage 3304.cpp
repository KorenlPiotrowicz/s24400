#include <iostream>

auto main(int agrc, char* argv[]) -> int
{
  int size, sum, array[1000];
  float average;
  std::cout << "Enter the number of elements: " << std::endl;
  std::cin >> size;
  std::cout << "Enter " << size << " elements: " << std::endl;
  sum = 0;
  for (auto i = 0; i < size; i++)
  {
    std::cin >> array[i];
    sum += array[i];
  }
  average = float(sum) / size;
  std::cout << "The average for this array is: " << average << std::endl;
  return 0;
}