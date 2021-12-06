/*Caricare un array di interi di 5 posizioni, e dire se i valori
memorizzati nell’array sono memorizzati in modo crescente*/

#include <iostream>

using namespace std;

int main()
{
	int vettore[5];
    bool controllo=true;

    cout<<"Carica il vettore \n\n";
    
    for(int i=0;i<5;i++)
    {
    	cout<<"Inserisci il numero in posizione ["<< i <<"] :";
        cin>>vettore[i];
    }

    for(int i=0;i<5;i++)
    {
        if(vettore[i]>vettore[i+1])
        {
		    controllo=false;
		}
    }
  
    if(controllo==true)
	{
	    cout<<"\nI numeri che hai inserito sono in ordine crescente";
	}
    else
	{
	    cout<<"\nI numeri che hai inserito NON sono in ordine crescente";
	}
	
    return 0;
    
}
