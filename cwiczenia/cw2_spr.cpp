/*
 * cw1_spr.cpp
 */


#include <iostream>

using namespace std;

void zlicz_kwote(int n)
{
    int bank = 0;
    int wplata = 100;
    
    for(int i=0; i<=n; i++)
    {
        bank = bank + wplata;
        wplata += 10;
    }
    cout<<"Stan konta po "<<n<<" miesiacach: "<<bank<<endl;
    cout<<"Kwota ostatniej wplaty: "<<100+(n*10);
}

int main(int argc, char **argv)
{
    int n = 0;
    //0 przyjmuje jako styczen
    do
    {
        cout<<"Podaj ilosc miesiecy: ";
        cin>>n;
    }while(n<0);

    
    zlicz_kwote(n);
    
    return 0;
}

