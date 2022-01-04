#include<iostream>
using namespace std;

int main()
{
    int i=1,no,fact=1;
    cout<<"Wprowadź liczbe:";
    cin>>no;
    do
    {
        fact=fact*i;
        i++;
    } while (i<=no);
    cout<<"Nasz wynik to: \n"<<fact;
return 0;
}
