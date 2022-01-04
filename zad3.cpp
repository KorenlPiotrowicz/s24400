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

	if (liczba1>liczba2){
		std::cout<<liczba1;
	}else if (liczba2>liczba1){
		std::cout<<liczba2;
	}else{
		std::cout<<"Liczby są równe\n";
	}
}

int main(){
	
	ask_user_for_integer("7");

}
