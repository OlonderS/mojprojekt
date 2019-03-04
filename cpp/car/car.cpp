/*
 * car.cpp
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include "car.h"

using namespace std;

Car::Car()
{
    marka=model="";
    rocznik=przebieg=0;
}

Car::Car(string mr, string ml, int r, int p)
{
    marka = mr;
    model = ml;
    rocznik=r;
    przebieg=p;
}

Car::dodaj()
{
    cout<<"Dodaj samochód: "<<endl;
    cout<<"Marka: "<<endl; cin>>marka;
    cout<<"Model: "<<endl; cin>>model;
    cout<<"Rocznik: "<<endl; cin>>rocznik;
    cout<<"Przebieg: "<<endl; cin>>przebieg;
    
}

Car::dane()
{
    cout<<"Twój samochód: "<<endl;
    cout<<"Marka: "<<marka<<endl;
    cout<<"Model: "<<model<<endl;
    cout<<"Rocznik: "<<rocznik<<endl;
    cout<<"Przebieg: "<<przebieg<<endl;
    
}
