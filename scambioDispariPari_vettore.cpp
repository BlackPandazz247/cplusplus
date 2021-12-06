/*Scrivi un programma che richiede all'utente un vettore costituito da un numero pari di elementi (massimo 100 elementi). 
Il programma deve scambiare i valori in posizione pari con quelli in posizione dispari, 
e infine stampare il contenuto del vettore dopo tale operazione*/

#include <iostream>

using namespace std;

int main()
{
	
	int lunghezza_vettore,scambio;
	
	//inserimento lunghezza del vettore
	do
	{
	    cout<<"Inserisci la lunghezza del vettore (pari e <=100):";
	    cin>>lunghezza_vettore;
    }
	while(lunghezza_vettore %2 != 0 || lunghezza_vettore>100 || lunghezza_vettore<=0); 
	
	int vettore[lunghezza_vettore];//dichiarazione del vettore
	
	//caricamento vettore
	for(int i=0;i<lunghezza_vettore;i++)
	{
		cout<<"Inserisci un numero da caricare nella posizione ["<< i <<"] :";
		cin>>vettore[i];
	}
	
	//output prima di scambiare i numeri dispari con pari 
	cout<<"\nI numeri che hai inserito prima dello scambio sono :\n";
	
	for(int i=0;i<lunghezza_vettore;i++)
	{
		cout<<vettore[i]<<endl;
	}
	
	//scambio dei numeri dispari con pari 
	for(int i=0;i<lunghezza_vettore-1;i++)
	{
		scambio=vettore[i];
		vettore[i]=vettore[i+1];
		vettore[i+1]=scambio;
	        i++;
	}
	
	//output dei numeri scambiati 
	cout<<"\nI numeri che hai inserito dopo aver scambiato i numeri dispari con quelli pari sono :\n";
	
	for(int i=0;i<lunghezza_vettore;i++)
	{
		cout<<vettore[i]<<endl;
	}
	
	system("PAUSE");
	
	return 0;
}
