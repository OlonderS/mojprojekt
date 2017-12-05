/*
 * cw1_spr.cpp
 */


#include <iostream>

using namespace std;

int nwd(int a, int b)
{
    while(a > 0)
    {
        a = a%b;
        b = b - a;
    }
    return b;
}

int main(int argc, char **argv)
{
    int licz = 0;
    int mian = 0;
    
    cout<<"Podaj pierwsza liczbe: ";
    cin>>licz;
    cout<<"Podaj druga liczbe: ";
    cin>>mian;
    
    cout<<"Ułamek wynosi: "<<(licz/nwd(licz,mian))<<
    '/'<<(mian/nwd(licz,mian))<<endl;
    
    return 0;
}

