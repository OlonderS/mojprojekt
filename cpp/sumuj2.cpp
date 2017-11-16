/*
 * petle.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int suma=0; //suma kolejnych liczb
    int liczba=0; //liczba wprowadzana 
 
     for(;;)//pęla nieskończona
    {
        cout<<"Podaj liczbe: ";
        cin>>liczba;
        suma +=liczba; //suma=suma+liczba
        if (suma>100)
            break;
            
    }
    
        cout<<"Suma wynosi: "<<suma;
    
    
	return 0;
}

