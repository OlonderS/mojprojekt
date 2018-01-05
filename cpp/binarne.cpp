/*
 * binarne.cpp
 */


#include <iostream>

using namespace std;

int wyszukaj_liniowo(int tab[], int el, int n)
{
    for(int i=0; i<n; i++)
    {
        if(tab[i] == el)
            return i;
    }
    return -1;
}

int main(int argc, char **argv)
{
    int ile = 8;
    int lista[ile] = {4, 3, 7, 0, 2, 1, 9, -4};
    int el = 3;
    
    cout<<wyszukaj_liniowo(lista, el, ile);
    
	return 0;
}

