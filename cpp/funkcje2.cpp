/*
 * funkcje.cpp
 */


#include <iostream>

using namespace std;

//int liczba=0;
//int krok=0; //zmienna globalna - dostępna w każdej zmiennej

//~void zwieksz1(int liczba, int krok)
//~{
        //~liczba+=krok;
//~}
//~void zwieksz2(int liczba, int krok)//przekazywanie przez wartość 
//~{
   //~liczba+=krok;
//~}
void zwieksz3(int &liczba, int &krok)//& przełączenie adresu, dostęp do orginalnych zmiennych, przekazywanie przez referencje
{
    liczba+=krok;
  
}
int main(int argc, char **argv)
{ 
    int liczba=0;
    int krok=0;   //zmienne lokalne 
      
    cout<<"Podaj liczbę: ";
    cin>>liczba;
    cout<<"Podaj krok: ";
    cin>>krok;
    
    
    zwieksz3(liczba, krok);
    zwieksz3(liczba, krok);
    
    cout<<"Liczba: "<<liczba<<endl;
    cout<<"Krok: "<<krok<<endl;
	return 0;
}

