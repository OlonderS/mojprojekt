/*
 * sort_babel.cpp
 */


#include <iostream>

using namespace std;


void wypelnij(int t[], int n, int m)
{
    srand(time(NULL));
    
    
    for (int i = 0; i < n; i++)
    {
        t[i] = 1 + rand() % m; // losowanie liczb całkowitych z zakresu <0; m>
    }
}


void drukuj(int t[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << t[i] << " ";
    }
    cout<<endl;
}


void zamien(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}


void sort_babel(int t[], int n)
{
    for (int i = 0, i < n; i++)
    {
        for (int j = i + 1; j < n - i; j++
        if (t[j] > t[j + 1])
            zamien(t[j], t[j+1]);
        
    }
}


int main(int argc, char **argv)
{
	const int ile = 10;
    int tab[ile];
    wypelnij(tab, ile, 20);
    cout<<"Tabela przed posortowaniem: "<<endl;
    drukuj(tab, ile);
    cout<<"Tabela po posortowaniu: "<<endl;
    sort_babel(tab, ile);
    drukuj(tab, ile);
	return 0;
}

