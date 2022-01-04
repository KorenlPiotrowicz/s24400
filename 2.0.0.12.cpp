#include <iostream>

auto main () -> int{

int szerokosc;

std::cout<<"Podaj rozmiar prostokąta: ";
std::cin>>szerokosc;

for (int i = 1; i<=szerokosc; i++){

	for (int ii = 1; ii<=i; ii++){
		std::cout<<"*";
	}
	std::cout<<"\n";
}

return 0;

}
