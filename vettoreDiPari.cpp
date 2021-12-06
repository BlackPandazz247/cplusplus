/*Scrivere un programma  in c++ che acquisisca da tastiera un numero n (dimensione del vettore) , 
carichi il vettore manualmente controllando che il numero inserito sia pari.
Se il numero è pari lo carico altrimenti lo scarto. Alla fine il programma deve stampare tutti gli elementi (che saranno solo numeri pari).*/

#include <iostream>

using namespace std;

int main()
{
	
	int dimensione_vettore,numero_pari;
	
	cout<<"Quanti valori vuoi inserire ? ";
	cin>>dimensione_vettore;
	
	int vettore[dimensione_vettore];
	
	for(int i=0;i<dimensione_vettore;i++)
	{
		INSERISCI_ANCORA :
		cout<<"Inserisci il numero da caricare nella posizione ["<<i<<"] :";
		cin>>numero_pari;
		if (numero_pari %2 == 0)
		{
			vettore[i]=numero_pari;
		}
		else 
		{
			cout<<"ERRORE, inserisci un numero pari "<<endl;
			goto INSERISCI_ANCORA;
		}
	}
	
	cout<<"\n\n";
	
	for(int i=0;i<dimensione_vettore;i++)
	{
		cout<<"Il numero inserito nella posizione ["<<i<<"] e' "<<vettore[i]<<endl;
	}
	
	return 0;
}
