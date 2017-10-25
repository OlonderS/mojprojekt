/*
 * tablice.cpp
 */


#include <iostream>

using namespace std;

void pobierzDane(int tab[],int ile)//w tablicach od razu używa orginalnych adresów, bez kopii
{   
    int i=0;
    cout<<"Podaj "<<ile<<" liczb/y: "<<endl;
    for(i=0; i<ile; i++)
    {
        cin>>tab[i];
    }
}
int sumuj(int tab[], int ile)
{
    int i=0;
    int suma=0;
    for (i=0;i<ile;i++)
    {
        suma+=tab[i];
    }
    return suma;
}
float liczsrednia(int tab[], int ile)
{
    return sumuj(tab, ile)/float(ile);
}
int main(int argc, char **argv)
{   
    int rozmiar=0;
    cout<<"Ile chcesz podać ocen?: "<<endl;
    cin>>rozmiar;
    //const int abc =5;  zmienna stała
    int liczby[rozmiar]; //ilość zarezerwowanego miejsca dla danej tabeli
    
    pobierzDane(liczby, rozmiar);//nie zwraca wartości
    
        cout<<"Suma="<<sumuj(liczby, rozmiar)<<endl;//zwraca wartość
        cout<<"Średnia artmetyczna wynosi: "<<(liczsrednia(liczby, rozmiar))<<endl;
}

