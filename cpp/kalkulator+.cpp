/*
 * kalkulator+.cpp

 */


#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
    char znak; //+ - * /
    int a,b;
    a=b=0;
        
    cout <<"Podaj pierwszą liczbę: ";
    cin>>a;
    cout <<"Podaj znak: ";
    cin>> znak;
    
    if (znak == '^')
    {   
        cout<<"Potęga tej liczby wynosi: "<<a*a;
    }
    else if (znak == '√ ')
    {
        cout<<"Pierwiastek tej liczby wynosi: "<<sqrt(a);
    }
    else 
        cout<<"Podaj drugą liczbę: ";
        cin>>b;
        
    if (znak == '+' )
    {
        cout<<"Suma jest równa: "<<a+b;
    }
    else if (znak== '-')
    {
        cout<<"Różnica jest równa: "<<a-b;
    }
    else if (znak== '*')
    {
        cout<<"Iloczyn jest równy: "<<a*b;
    }
    else if (znak=='/')
    {
        cout<<"Iloraz jest równy: "<<a/b;
    }
	return 0;
}
