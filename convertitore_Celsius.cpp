#include <iostream>
using namespace std;

int main()
{
    double celsius,kelvin,fahrenheit;
    
    ERRORE:
    cout<<"Inserisci la temperatura in celsius :";
    cin>>celsius;
    kelvin = celsius+273.15;
    fahrenheit = celsius*1.8+32;
    
    if(celsius<=-273.15){
        cout<<"ERRORE, temnperatura inferiore o uguale allo 0 assoluto"<<endl<<endl;
        goto ERRORE;
    }
    else{
        cout<<endl<<celsius<<" gradi celsius, in kelvin equivalgono a :"<<kelvin<<" gradi"<<endl;
        cout<<celsius<<" gradi celsius, in fahrenheit equivalgono a :"<<fahrenheit<<" gradi";
    }
    
    return 0;
}