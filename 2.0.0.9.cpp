#include<iostream>
using namespace std;

int main()
{
    int num, factorial=1;
    cout<<"Wprowadź liczbe:";
    cin>> num;
    while(num>0)
    {
        factorial *=num;
        num--;
    }
    cout<<"wynik to:"<< factorial;
    return 0;
}
