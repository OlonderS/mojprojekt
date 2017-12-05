/*
 * cw3_spr.cpp
 */


#include <iostream>

using namespace std;

int zlicz_dzielniki(int a)
{
    int il_dziel = 0;
    for(int i=1; i<=a;i++)
    {
        if(a%i == 0)
        {
            il_dziel++;
        }
    }
    return il_dziel;
}

int main(int argc, char **argv)
{
    int a = 0;
    
    cout<<"Podaj liczbe: ";
    cin>>a;
    
    cout<<"Ilosc dzielnikow liczby "<<a<<" jest rowna: "<<zlicz_dzielniki(a);
    return 0;
}

