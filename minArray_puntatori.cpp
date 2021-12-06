//Scrivete una funzione dove dato un array a di lunghezza n, restituisca un puntatore all’elemento più piccolo dell’array.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int n;

int minore (int vettore[])
{
    int *p = &vettore[0];

    for (int i=0; i<n ;i++)
    {
        if (vettore[i] < *p)
        {
            p = &vettore[i];
        }
    }

    return *p;
}

int main ()
{
    cout<<"Inserisci la lunghezza del vettore: ";
    cin>>n;
    int vettore[n];

    srand(time(NULL));
    for (int i=0; i<n ;i++)
    {
        vettore[i] = rand()%100+1; //carico il vettore in maniera casuale 
    }

    cout<<"Il vettore e' formato dai seguenti numeri: "; //stampo il vettore 
    for(int i=0; i<n ; i++)
    {
        cout<<vettore[i]<<" ";
    }

    cout<<"\nIl numero piu' piccolo del vettore e': "<< minore(vettore);

    return 0;
}