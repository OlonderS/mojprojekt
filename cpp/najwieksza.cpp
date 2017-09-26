/*
 * pobierz dwie liczby całkowite od użytkownika i wydrukuj większą
*/
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{    
    int a=0;
    int b=0;
    cout <<"Podaj pierwszą liczbę: ";
    cin>>a;
    cout<<"Podaj drugą liczbę: ";
    cin>>b;
    
    if (a>b)
    {
        cout<<a<<" jest większe od "<<b<<endl;
    }
    else if (a<b)
    {
        cout<<a<<" jest mniejsze od "<<b<<endl;
    }
    else //if (a==b)
    {
        cout<<a<<" jest równe "<<b<<endl;
    }
	return 0; 
}
