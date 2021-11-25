#include <iostream>

auto main() -> int 
{
  int height, width;
  std::cout << "Chessboard height: " << std::endl;
  std::cin >> height;
  std::cout << "Chessboard width: " << std::endl;
  std::cin >> width;
  for (auto i = 0; i < height; i++)
  {
    for (auto j = 0; j < width; j++)
    {
      if((i + j) % 2 == 0)
      {
        std::cout << " ";
      } else {
        std::cout << "#";
      }
    }
    std::cout << std::endl;
  }
  return 0;
}