/*
 * kalkulator.cpp
 */


#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
    char znak; //+ - * /
    int a,b;
    a=b=0;
        
    cout <<"Podaj pierwsza liczbe: ";
    cin>>a;
    cout <<"Podaj druga liczbe: ";
    cin>>b;
    cout <<"Podaj znak: ";
    cin>> znak;
    
    
    if (znak == '+' )
    {
        cout<<"Suma jest rowna: "<<a+b;
    }
    else if (znak== '-')
    {
        cout<<"Różnica jest rowna: "<<a-b;
    }
    else if (znak== '*')
    {
        cout<<"Iloczyn jest rowny: "<<a*b;
    }
    else if (znak=='/')
    {
        cout<<"Iloraz jest rowny: "<<a/b;
    }
	return 0;
}

