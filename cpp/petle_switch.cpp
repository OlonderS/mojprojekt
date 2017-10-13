/*
 * petle_switch.cpp
 * Progam pobiera numer miesiąca i wyświetla jego nazwę
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int m=0;
    //while(true)
    //{
    //cout<<"Podaj nazwę miesiąca: ";
    //cin>>m;
    //if(m>=0&&m<=12)
    //break;
    //}
    
    //pętle zaporowe
    
    while(m>12||m<1)
    {
    cout<<"Podaj miesiąc (1-12): ";
    cin>>m;
    
    //if (m==1)
        //cout<<"Styczeń";
        //else if (m==2)
        //cout<<"Luty";
        //else if (m==3)
        //cout<<"Marzec";
        
        switch(m)
        {
            case 1:
        {   
            cout<<"Styczeń";
        }break;
            case 2:
        {   
            cout<<"Luty";
        }break;
            case 3:
        {   
            cout<<"Marzec";
        }break;
            case 4:
        {   
            cout<<"Kwiecień";
        }break;
            case 5:
        {   
            cout<<"Maj";
        }break;
            case 6:
        {   
            cout<<"Czerwiec";
        }break;
            case 7:
        {   
            cout<<"Lipiec";
        }break;
            case 8:
        {   
            cout<<"Sierpień";
        }break;
            case 9:
        {   
            cout<<"Wrzesień";
        }break;
            case 10:
        {   
            cout<<"Październik";
        }break;
            case 11:
        {   
            cout<<"Listopad";
        }break;
            case 12:
        {   
            cout<<"Grudzień";
        }break;
        default:
            cout<<"Nie ma takiego miesiąca";
        }
    }
	return 0;
}

