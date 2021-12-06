/*Scrivere due funzioni che ricevono come parametro il puntatore al primo elemento di un vettore che contiene N numeri con N > 5.
La funzione A deve restituire la somma dei numeri del vettore mentre la funzione B deve restituire la somma del primo e dell'ultimo numero del vettore*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int n;

int functionA (int *indirizzo) //somma di tutti gli elementi del vettore 
{
    int somma = *indirizzo;
    
    for(int i=1; i<n ; i++)
    {
        somma += *(indirizzo+i);
    }
    
    return somma;
}

int functionB (int *indirizzo)  //somma del primo e dell'ultimo elemento del vettore
{
    int num1 = *indirizzo;
    int num2 = *(indirizzo + (n-1));

    return num1 + num2;
}

int main()
{
    cout<<"Inserisci la lunghezza del vettore: ";
    cin>>n;
    int vector[n];
    
    srand(time(NULL));     //carico il vettore randomicamente
    for(int i=0; i<n ; i++)
    {
        vector[i] = rand()%100+1;
    }

    cout<<"Il vettore e' formato dai seguenti numeri: "; //stampo il vettore 
    for(int i=0; i<n ; i++)
    {
        cout<<vector[i]<<" ";
    }

    cout<<"\nLa somma di tutti gli elementi del vettore e': "<<functionA(&vector[0]);
    cout<<"\nLa somma del primo e dell'ultimo elemento e': "<<functionB(&vector[0]);

    return 0;
}