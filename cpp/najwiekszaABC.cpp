/*
 * pobierz trzy liczby całkowite od użytkownika i wydrukuj większą
*/
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{    
    int a=0;
    int b=0;
    int c=0;
    cout <<"Podaj pierwszą liczbę: ";
    cin>>a;
    cout<<"Podaj drugą liczbę: ";
    cin>>b;
    cout<<"Podaj trzecią liczbę: ";
    cin>>c;
    
    if (a>b && a>c)
    {
        cout<<"a="<<a<<" jest największą liczbą"<<endl;
    }
    else if (b>a && b>c)
    {
        cout<<"b="<<b<<" jest największą liczbą"<<endl;
    }
    else if(c>a && c>b)
    {
        cout<<"c="<<c<<" jest największą liczbą"<<endl;
    }
    else if(a==b && b==c)
    {
        cout<<"Wszystkie liczby są równe"<<endl;
    }
    
	return 0; 
}
