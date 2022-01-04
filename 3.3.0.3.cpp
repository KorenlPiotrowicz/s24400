#include <iostream>

auto main() -> int
{
  auto endGame = false;
  while (endGame == false) { // if endGame is true, the loop will break
    std::cout << "Choose your figure, type \"triangle\", \"rectangle\", \"circle\", \"trapezium\" or \"hexagon\". " << std::endl;
    std::string userInput;
    std::cin >> userInput; 
    if (userInput == "triangle")
    {
      float height, base;
      std::cout << "Base: ";
      std::cin >> base;
      std::cout << "Height: ";
      std::cin >> height;
      if (height <= 0 || base <= 0) // if wrong data
      {
        std::cout << "-1" << std::endl;
      } else {
      std::cout << "The area of this triangle is: " << base * height / 2 << std::endl;
      }
    }
    else if (userInput == "rectangle")
    {
      float sideA, sideB;
      std::cout << "Side a: ";
      std::cin >> sideA;
      std::cout << "Side b: ";
      std::cin >> sideB;
      if (sideA <= 0 || sideB <= 0) // if wrong data
      {
        std::cout << "-1" << std::endl;
      } else {
      std::cout << "The area of this rectangle is: " << sideA * sideB << std::endl;
      }
    }
    else if (userInput == "circle")
    {
      float radius;
      std::cout << "Circle radius: ";
      std::cin >> radius;
      if (radius <= 0) { // if wrong data
        std::cout << "-1" << std::endl;
      } else {
        std::cout << "The are of this circle is: " << radius * radius * 3.14 << std::endl;
      }
    }
    else if (userInput == "trapezium")
    {
      float baseA, baseB, height;
      std::cout << "Base a: ";
      std::cin >> baseA;
      std::cout << "Base b: ";
      std::cin >> baseB;
      std::cout << "height: ";
      std::cin >> height;
      if (baseA <= 0 || baseB <= 0 || height <= 0) // if wrong data
      {
        std::cout << "-1" << std::endl;
      } else {
        std::cout << "The area of this trapezium is: " << (baseA + baseB) * height / 2 << std::endl;
      }
    }
    else if (userInput == "hexagon")
    {
      float side;
      std::cout << "Side: ";
      std::cin >> side;
      if (side <= 0) // if wrong data
      {
        std::cout << "-1" << std::endl;
      } else {
        std::cout << "The area of this hexagon is: " << 3 * side * side * 1.73 / 2 << std::endl;
      }
    }
    std::string end;
    std::cout << "Do you want to try again? Type \"y\" or \"n\": ";
    std::cin >> end;
    if (end == "y") // if user types "y" the loop will continue, else it stops
    {
      endGame = false;
    } else {
      endGame = true;
    }
  }
  return 0; 
}
