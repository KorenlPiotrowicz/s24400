#include <iostream>

auto main () -> int{

int wielkosc;

std::cout<<"Podaj wielkość kwadrata: ";
std::cin>>wielkosc;

for (int i = 1; i<=wielkosc; i++){
	std::cout<<"*";
}
std::cout<<"\n";

for (int i = 3; i<=wielkosc; i++){
	std::cout<<"*";
	for (int ii = 2; ii<=wielkosc-1;ii++){
		std::cout<<" ";
	}
	std::cout<<"*\n";
}

for (int i = 1; i<=wielkosc; i++){
	std::cout<<"*";
}
std::cout<<"\n";

return 0;

}
