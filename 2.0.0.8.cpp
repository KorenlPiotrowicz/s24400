#include<iostream>
using namespace std;
 
int main()
{
    int liczba,wynik=1;
    cout<<"Podaj liczbe";
    cin>> liczba;
    for( int i=2;i <= liczba;i++)
   {
    wynik=wynik *i;
   }
   cout<<wynik <<endl;
   
   return 0;
   
}
