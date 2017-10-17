/*
 * petle_switch.cpp
 * Progam pobiera numer miesiąca i wyświetla jego nazwę
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	char zn='t';
    
    while(zn=='t' || zn=='T' || zn=='n' || zn=='N')
        {
            cout<<"Podaj literę: ";
            cin>>zn;
        }
          
       // if (zn=='t' || zn=='T' || zn=='n' || zn=='N')
       // ; //instrukcja pusta
        //else 
          //  break;
        
       
        
            //switch(zn)
            //{
            //case 't':
            //case 'T':
            //case 'n':
            //case 'N':
             //   cout <<zn;
            //default:
              //  break; //nie zadziała 
            //}
        
        

	return 0;
}

