/*
 * petle.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int suma=0; //suma kolejnych liczb
    int liczba=0; //liczba wprowadzana 
    int  i=0;
     while (suma<=100) //pętla nieskończona
    {
        cout<<"Podaj "<<i+1<<" liczbę: ";
        cin>>liczba;
        suma +=liczba; //suma=suma+liczba
        i++;
    }
        cout<<"Suma wynosi: "<<suma;
	return 0;
}

