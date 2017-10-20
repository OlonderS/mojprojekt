/*
 * funkcje.cpp
 */


#include <iostream>

using namespace std;

void dodaj(int a, int b) //funkcja pusta, nie zwraca wyniku
{
    cout<<"Suma: "<<a+b<<endl;
}
int odejmij (int l1, int l2) //w  środku zawsze return (po za void)
{
    return l1-l2;
}
int mnoz (int m1, int m2)
{
    return m1*m2;
}
void podziel(int a, int b)
{
    if(b==0)
    {
    cout<<"Iloraz: Nie dziel przez 0!";
    }
    else cout<<a/b;
}
int main(int argc, char **argv)
{
	int a,b;
    a=b=0;
    
    cout<<"Podaj dwie liczby: "<<endl;
    cin>>a>>b;
    
    dodaj(a,b);  //po nazwie funkcji zawsze nawiasy; wywołanie funkcji
    cout<<"Różnica: "<<odejmij(a, b)<<endl;
    cout<<"Iloczyn: "<<mnoz(a, b)<<endl;
    cout<<"Iloraz: "; 
    podziel(a,b);
	return 0;
}

