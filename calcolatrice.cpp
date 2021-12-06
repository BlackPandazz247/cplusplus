#include <iostream>
#include <cmath>
#include <typeinfo> //libreria per il controllo del tipo inserito 

using namespace std;

double addizione(double a,double b) //funzione di addizione 
{
	return a+b;
}

double sottrazione(double a,double b) //funzione di sottrazione
{ 
	return a-b;
}

double moltiplicazione(double a,double b) //funzione di moltiplicazione
{
	return a*b;
}

double divisione(double a,double b) //funzione di divisione
{
	return a/b;
}

double potenza(double a,double b) //funzione per elevamento a potenza
{
	if (a,b == (double)(int)a,b)
	{
	    (int)a,b;
	    return pow(a,b);
    }
	else 
	    return pow(a,b);
}

double esponente;
void caricamentoPotenza (double *vettore)
{
	do
	{
		cout<<"Inserisci il valore dell'esponente :";
		cin>>esponente;
	}while(typeid(esponente) == typeid(char));
	*vettore = potenza(*vettore,esponente);
}

int main()
{

    cout<<"Per usare questo calcolatore bisogna premere enter dopo avere inserito un numero,inserire l'operazione che si vuole eseguire e premere di nuovo enter\n";
	cout<<"PS: Questa calcolatrice non permette di usare le parentesi.\n";

	int numeri_da_inserire;
	
	char restart;
	
	//richiesta della dimensione del vettore all'utente 
	do
	{
		cout<<"Quanti numeri vuoi usare ?:";
	    cin>>numeri_da_inserire;
	}while(typeid(numeri_da_inserire) != typeid(int) || numeri_da_inserire <=1);
	
	char operazioni[numeri_da_inserire-1]; //vettore delle operazioni 
	double vettore[numeri_da_inserire]; //vettore dei numeri da operare 
	for(int i=0,j=0;i<numeri_da_inserire;j++,i++) //carico i vettori 
	{
		do
		{
			cout<<"Inserisci il "<< (i+1) << " numero :";
			cin>>vettore[i];
	    }while( typeid(vettore[i]) == typeid(char) );

		while(j < numeri_da_inserire-1)
		{xud:
			do
			{
				cout<<"Inserisci l'operazione :";
				cin>>operazioni[j];
			}while(typeid(operazioni[j]) != typeid(char) || (operazioni[j] != '+' && operazioni[j] != '-' && operazioni[j] != '*' && operazioni[j] != '/' && operazioni[j] != '^'));

			//blocco per eseguire la potenza 
			if(operazioni[j] == '^')
			{
				caricamentoPotenza(&vettore[i]);
				goto xud;
			}
			break;
		}
		if(i == numeri_da_inserire-1)
		{
			cout<<"\nVuoi elevare a potenza l'ultimo numero ?\nScrivi y se si, altrimenti premi un qualsiasi tasto :";
			cin>>restart;
			if(restart == 'y')
			{
				caricamentoPotenza(&vettore[i]);
			}
		}
	}

    double risultato = vettore[0]; //variabile per immagazzinare il risultato inizializzata al primo valore del vettore 

	for(int i=1,j=0;j<numeri_da_inserire-1;j++,i++) //ciclo per il controllo dell'operazione che l'utente vuole fare 
	{
		switch(operazioni[j])
		{
			case '+':
				risultato = addizione(risultato,vettore[i]);
				break;
			case '-':
				risultato = sottrazione(risultato,vettore[i]);
				break;
			case '*':
				risultato = moltiplicazione(risultato,vettore[i]);
				break;
			case '/':
				risultato = divisione(risultato,vettore[i]);
				break;
		}
	}

	if(risultato == (double)(int)risultato)
	    cout<<"Il risultato e' :"<< (int)risultato <<endl;
	else
	    cout<<"Il risultato e' :"<< risultato <<endl;

	system("pause");
	return 0;
}