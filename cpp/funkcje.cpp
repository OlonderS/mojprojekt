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
float dziel(float d1, float d2)
{
    if(d2==0)
        cout<<"Nie dziel przez 0"<<endl;
        return 0;
    }
    else
    return d1/d2;
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
    cout<<"Iloraz: "<<dziel(a, b)<<endl;
	return 0;
}

