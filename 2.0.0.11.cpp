#include <iostream>

auto main () -> int{

int dlugosc;
int szerokosc;

std::cout<<"Podaj wysokość prostokąta: ";
std::cin>>dlugosc;
std::cout<<"Podaj szerokość prostokąta: ";
std::cin>>szerokosc;

for (int i = 1; i<=dlugosc; i++){
	for (int ii = 1; ii<=szerokosc; ii++){
		std::cout<<"*";
	}
	std::cout<<"\n";
}

return 0;

}
