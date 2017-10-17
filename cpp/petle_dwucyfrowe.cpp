/*
 * petle_dwucyfrowe.cpp
 * Napisz program "petle_cw4.cpp", który wypisuje wszystkie dwucyfrowe 
 * liczby parzyste podzielne przez 3 w zakresie<m,n> podanym
 * przez użytkownika
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int m=0;
    int n=0;
    
    while(m<10 || m>99 || n<m)
    {
        cout<<"Podaj pierwszą liczbę (10-100): ";
        cin>>m;
        cout<<"Podaj drugą liczbę (10-100): ";
        cin>>n;
    }
    while(m<=n)
    {
    if (m%2==0 && m%3==0)
        {
            cout<<m<<endl;
        }
        m+=2;
    }
    
    return 0;
}

