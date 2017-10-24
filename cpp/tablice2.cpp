/*
 * tablice.cpp
 */


#include <iostream>

using namespace std;


int main(int argc, char **argv)
{   
    int rozmiar=0;
    cout<<"Ile chcesz podać ocen?: "<<endl;
    cin>>rozmiar;
    //const int abc =5;  zmienna stała
    int liczby[rozmiar]; //ilość zarezerwowanego miejsca dla danej tabeli
    int i=0;
    int suma=0;
    
    cout<<"Podaj 5 ocen (0-6): "<<endl;
    for(i=0; i<rozmiar; i++)
    {
        cin>>liczby[i];
       
    }
    cout<<"Podane  oceny: "<<endl;
    for(i=0; i<rozmiar; i++)
    {
        cout<<liczby[i]<<" "<<endl;
        suma+=liczby[i];
    }
        cout<<"Suma ocen wynosi: "<<suma<<endl;
        cout<<"Średnia artmetyczna wynosi: "<<float(suma)/float(rozmiar);
    
    
        
    
   
    //~cin>>liczby[1];
    //~cin>>Liczby[2]<<endl;
    //~cin>>Liczby[3]<<endl;
    //~cin>>liczby[4];
    
    //~cout<<liczby[0]<<endl;
    //~cout<<liczby[1]<<endl;
    //~cout<<liczby[4]<<endl;
      
        
	return 0;
}

