#include <iostream> 
using namespace std;

int inversione(double a[],double b[],int dimensione) //inversione vettore
{
    for(int i=dimensione-1,j=0; i>=0 ;i--,j++) 
    {
        b[j] = a[i];
    }
}

int main()
{
    int lunghezza;

    do //inserimento dimensione vettore
    {
        cout<<"Inserisci la dimensione del vettore :";
        cin>>lunghezza;
    }while(lunghezza<=0);

    double vettore[lunghezza],vettore_inverso[lunghezza];

    for(int i=0;i<lunghezza;i++)  //caricamento vettore
    {
        cout<<"Inserisci il "<< (i+1) <<" valore :";
        cin>>vettore[i];
    }

    cout<<"\nAl contrario :\n";

    inversione(vettore,vettore_inverso,lunghezza);

    for(int i=0;i<lunghezza;i++)
    {
        cout<< vettore_inverso[i] <<endl;
    }

    return 0;
}