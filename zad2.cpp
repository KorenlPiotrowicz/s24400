#include <iostream>
#include <string>

auto ask_user_for_integer(std::string const prompt) -> int{
	int liczba1;
	int liczba2;	

	while (true){
	std::cin>>liczba1;
	std::cin>>liczba2;	
	break;

	if (not prompt.empty()){
		std::cout << prompt;
	}
	auto value = std::string{};
	std::getline(std::cin, value);
	return std::stoi(value);
	}

	std::cout<<liczba1 + liczba2<<"\n";
}

int main(){
	
	ask_user_for_integer("7");

}
