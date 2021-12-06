/*Scrivere un programma in linguaggio C++ che riceve in ingresso una sequenza di N numeri interi. I numeri
sono memorizzati in un vettore. Il valore N e inserito dall’utente, ma il vettore può contenere al massimo 
30 numeri. Terminato l’inserimento della sequenza di numeri, il programma deve verificare se gli elementi
del vettore sono tutti uguali tra loro.*/

#include <iostream>

using namespace std;

int main()
{
	int dimensione_vettore;
	bool controllo;
	
	do
	{
	    cout<<"Inserisci la dimensione del vettore (massimo 30):";
	    cin>>dimensione_vettore;
    }while(dimensione_vettore>30 || dimensione_vettore<=1);
    
    double vettore[dimensione_vettore];
	
	for(int i=0;i<dimensione_vettore;i++)
	{
		cout<<"Inserisci il "<< (i+1) <<"° elemento :";
		cin>>vettore[i];
	}
	
	for(int i=0;i<dimensione_vettore-1;i++)
	{
		if(vettore[i]!=vettore[i+1])
		{
			controllo=false;
			break;
		}
		else
		{
			controllo=true;
		}
	}
	
	if(controllo==true)
	{
		cout<<"I numeri che hai inserito sono uguali tra loro";
	}
	else
	{
		cout<<"I numeri che hai inserito non sono tutti uguali tra loro";
	}
	
	return 0;
}
