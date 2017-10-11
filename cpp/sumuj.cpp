/*
 * petle.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int i; //zmienna iteracyjna
    int suma=0; //suma kolejnych liczb
    int liczba=0; //liczba wprowadzana 
    int n=0;
            
    cout<<"Ile liczb podasz? ";
    cin>>n;
            
    for(i=0; i<n; i++)//i+=2
    {
        cout<<"Podaj "<<i+1<<" liczbę: ";
        cin>>liczba;
        suma +=liczba; //suma=suma+liczba
    }
        cout<<"Suma wynosi: "<<suma;
    
    
	return 0;
}

