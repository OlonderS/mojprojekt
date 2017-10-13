/*
 * petle_switch.cpp
 * Progam pobiera numer miesiąca i wyświetla jego nazwę
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	char zn=0;

    while(zn!='t' || zn!='T' || zn!='n' || zn!='N')
    {
    cout<<"Podaj znak: ";
    cin>>zn
    }

	return 0;
}

