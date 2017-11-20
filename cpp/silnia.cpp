/*
 * silnia.cpp
 */

#include <iostream>

using namespace std;


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
        
    cout<<"Silnia "<<liczba<<" wynosi: "<<silnia(liczba);
    
    return 0;
}


