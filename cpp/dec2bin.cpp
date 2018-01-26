/*
 * dec2bin.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    char znakA='A';
    char znakB='B';
    cout<<(int)znakA<<(int)znakB<<endl;
    cout << (char)14 << (char)15 << endl;
    
    int podstawa = 0;
    int liczba = 0;
    int reszty[16];
    int i = 0; // indeks tabeli
    cout<<"Podaj liczbę(dec): ";
    cin >> liczba;
    cout<<"Podaj podstawę: ";
    cin >> podstawa; 

    do
    {
        reszty[i] = liczba % podstawa;
        liczba = liczba / podstawa;
        i++;
    }
    while(liczba > 0);
    
    
    //~for (int j = i - 1; j>=0; j--)
    //~{ 
        //~cout << reszty[j];
    //~}


    while(i-1>=0)
    {
        i--;
        cout<<reszty[i];
    }
    
    //cout<<reszty<<endl; - pokazuje adres komórki tabeli
	return 0;
}

