#include <iostream>
using namespace std;

int media(int n1 , int n2){
    int risultato;
    risultato = (n1 + n2) /2;
    return risultato;
}

int main ()
{
    int n1,n2;
    
    cout<< "inserisci il primo numero :";
    cin>>n1;
    cout<< "inserisci il secondo numero :";
    cin>>n2;
    cout<<"la media dei due numeri e':"<< media;
    
    return 0;
}