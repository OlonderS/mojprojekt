/*
 * tablice.cpp
 */


#include <iostream>

using namespace std;



int main(int argc, char **argv)
{
    int liczby[5]; //ilość zarezerwowanego miejsca dla danej tabeli
    int i=0;
    int suma=0;
    
    cout<<"Podaj 5 ocen (0-6): "<<endl;
    for(i=0; i<5; i++)
    {
        cin>>liczby[i];
       
    }
    cout<<"Podane  oceny: "<<endl;
    for(i=0; i<5; i++)
    {
        cout<<liczby[i]<<" "<<endl;
        suma+=liczby[i];
    }
        cout<<"Suma ocen wynosi: "<<suma<<endl;
        cout<<"Średnia artmetyczna wynosi: "<<float(suma)/float(5); //liczby wymierne i dzielnik i dzielna
    
    
        
    
   
    //~cin>>liczby[1];
    //~cin>>Liczby[2]<<endl;
    //~cin>>Liczby[3]<<endl;
    //~cin>>liczby[4];
    
    //~cout<<liczby[0]<<endl;
    //~cout<<liczby[1]<<endl;
    //~cout<<liczby[4]<<endl;
      
        
	return 0;
}

