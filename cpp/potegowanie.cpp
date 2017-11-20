/*
 * potegowanie.cpp
 */

#include <iostream>

using namespace std;


float poteguj(float wykladnik, float podstawa)
{
    float wynik = 1;
    
    for(int i = 1; i<=wykladnik; i++)
    {
        wynik=wynik*podstawa;
    }
    return wynik;
}
int main(int argc, char **argv)
{
    float wykladnik = 0;
    float podstawa = 0;
    
    cout<<"Podaj podstewe potegi: ";
    cin>>podstawa;
        
    do
    {
        cout<<"Podaj wykladnik potegi: ";
        cin>>wykladnik;
    }while(wykladnik < 0);
    
    cout<<"Wynik potegowania wynosi: "<<poteguj(wykladnik, podstawa);
    
    return 0;
}
