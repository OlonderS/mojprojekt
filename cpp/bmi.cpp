

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	float wzrost;
    int waga;
    float bmi;
    
    cout<<"Podaj swoją masę: ";
    cin>>waga;
    cout<<"Podaj swój wzrost(w metrach): ";
    cin>>wzrost;
    
    bmi = waga/(wzrost*wzrost);
    
   if (bmi<18.5)
    {
        cout<<"masz mały problem";
    }
    else if (bmi<25)
    {
        cout<<"spoko";
    }
    else if (bmi<30)
    {
        cout<<"masz większy problem";
    }
    else if (bmi>=30)
    {
        cout<<"jesteś grubasem";
    }


	return 0;
}

