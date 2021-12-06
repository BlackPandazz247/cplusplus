#include <iostream>
using namespace std;

struct numeri
{
    int data;
    numeri* next;
};

numeri* inserisci(numeri* rif)
{   
    numeri* temp = new numeri; 
    cout<< "Inserisci numero: ";
    cin >> temp->data;
    cout<<endl;

	temp->next = rif; 
    rif = temp;
    
    return rif;
}

numeri* inserisciCoda(numeri* rif)
{
    numeri* temp = new numeri; 
    
    cout<< "Inserisci numero: ";
    cin >> temp->data;
    cout<<endl;
	temp->next = NULL;

    if (rif == NULL) //se è il primo elemento della lista
	{	
        rif = temp;
    }
    else
    {   
        numeri* p = rif;
        while(p->next != NULL) //scorro la lista fino all'ultimo elemento
        {
            p = p->next;
        } 
		p->next = temp;
    }
     
    return rif;
}

int find(numeri* rif) //trovo la posizione del primo numero dispari nella lista
{
	int index = 1;              
	numeri* temp = rif;
	
	while(temp!=NULL) //scorro la lista finche non trovo un numero dispari o finche non arrivo a 0
    {
		if(temp->data %2 != 0)
        {         
			return index;               
		}
		temp = temp->next;
		index++;
	}   

    return 0;
}

numeri* pushDispari(numeri* rif)
{   
    int index = find(rif);
    if(index <= 0)         //controllo se sono stati trovati numeri dispari
    {
        cout<<"Non ci sono numeri dispari\n\n";
        return rif;
    }

    if(index == 1)
    {
        return inserisci(rif);  //se il numero dispari è in prima posizione chiamo la funzione per inserimento in testa 
    }

    numeri* temp = new numeri;
    cout<< "Inserisci numero: ";
    cin >> temp->data;
    cout<<endl;

    numeri* p = rif;
    for(int i=0; i<(index - 2) ; i++)
    {
        p = p->next;        //faccio arrivare il puntatore al nodo che precederà il nuovo nodo
    }
    temp->next = p->next;   //faccio puntare il nuovo nodo al nodo a cui puntava il suo nodo precedente
    p->next = temp;     //faccio puntare il nodo precedente al nuovo nodo

    return rif;
}

void stampa (numeri* rif)
{ 
    if (rif == 0) 
        cout<<"\nLa lista e' vuota.\n\n";
    else
    {
        numeri* temp = rif;
        cout<<endl;
        while (temp != NULL)
        { 
            cout<< temp->data << "\n" ;
            temp = temp->next;
        }
        cout<<endl;
    }
}

int main()
{ 
    numeri* list = NULL;
    int scelta;

    while(true)
    {
        cout<<"1)Inserisci un valore in testa\n2)Inserisci un valore in coda\n";
        cout<<"3)Inserisci un valore prima di un numero dispari\n";
        cout<<"4)Stampa la lista\n";
        cout<<"0)exit\n:";
        cin>>scelta;

        switch(scelta)
        {
            case 1: 
                list = inserisci(list); 
                break;
            case 2:
                list = inserisciCoda(list);
                break;
            case 3: 
                list = pushDispari(list);
                break;
            case 4:
                stampa(list);
                break;
            case 0: 
                return false;
        }
    }

    return 0;
}