/*
 * silnia.cpp
 */

#include <iostream>

using namespace std;

int silnia_rek(int n)
{
	if(n<2)
		return 1;
	return silnia_rek(n-1) * n;
}


int silnia(int n)
{
    int wynik = 1;
    
    for(int i = 2; i<=n; i++)
    {
        wynik=wynik*i;
    }
    return wynik;
}

int main(int argc, char **argv)
{
    int liczba = 0;
    
    cout<<"Podaj liczbe: ";
    cin>>liczba;
        
    cout<<"Silnia "<<liczba<<" wynosi: "<<silnia(liczba)<<endl;
    cout<<"Silnia "<<liczba<<" wynosi: "<<silnia_rek(liczba);
    
    return 0;
}


