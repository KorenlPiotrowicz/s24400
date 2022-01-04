#include <iostream>
#include <string>

int main(){

int liczba1;
std::cin>>liczba1;
int liczba2;
std::cin>>liczba2;
int liczba3;
std::cin>>liczba3;

if (liczba1>liczba2 && liczba1>liczba3){
	std::cout<<liczba1;
} else if (liczba2>liczba1 && liczba2>liczba3){
	std::cout<<liczba2;
} else if (liczba3>liczba1 && liczba3>liczba2){
	std::cout<<liczba3;
} else{
	std::cout<<"Proszę nie wpisywac takich samych liczb";
}

}
