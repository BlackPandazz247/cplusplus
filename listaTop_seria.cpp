#include <iostream>
#include <list>
using namespace std;

list<int> numeri; //creo una lista di interi
int input;

void inserisci(list<int>& rif) //passaggio di parametro per riferimento che mi permette di usare una funzione void
{   
    cout<< "Inserisci numero: ";
    cin >> input;
    cout<<endl;
	rif.push_front(input); //funzione per inserire in testa
}

void inserisciCoda(list<int>& rif)
{
    cout<< "Inserisci numero: ";
    cin >> input;
    cout<<endl;
    rif.push_back(input);  //funzione per inserire in coda
}

list<int>::iterator find(list<int>& rif) //trovo la posizione del primo numero dispari nella lista, la funzione è di tipo iteratore
{
	list<int>::iterator it = rif.begin(); //iteratore inizializzato al primo elemento della lista
    
    while(it != rif.end())    //analizzo ogni elemento del vettore finche non ne trovo uno dispari
    {
        if(*it %2 != 0)
        {
            return it;
        }
        it++;
    }
}

void pushDispari(list<int>& rif)
{   
    list<int>::iterator it = find(rif); //iteratore iniziallizato al primo elemento dispari nella lista
      
    if(it == rif.end())  //controllo se sono stati trovati numeri dispari       
    {
        cout<<"Non ci sono numeri dispari\n\n"; return;
    }
    else if(it == rif.begin())  //se il numero dispari è in prima posizione chiamo la funzione per inserimento in testa
    {
        inserisci(rif); return;
    }

    cout<< "Inserisci numero: ";
    cin >> input;
    cout<<endl;
    rif.insert(it, input);  //funzione di inserimento in una determinata posizione nella lista
    //il primo valore deve essere di tipo iteratore mentre il secondo deve essere dello stesso tipo dei valori della lista
}

void stampa(list<int>& rif)
{ 
    if(rif.empty() == 1) //contro se la lista è vuota, se è vuota empty() torna true
        cout<<"\nLa lista e' vuota.\n\n";
    else
    {
        cout<<endl;
        list<int>::iterator it = rif.begin();

        while(it != rif.end())
        { 
            cout<< *it << "\n" ;
            it++;
        }
        cout<<endl;
    }
}

int main()
{ 
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
                inserisci(numeri); 
                break;
            case 2:
                inserisciCoda(numeri);
                break;
            case 3: 
                pushDispari(numeri);
                break;
            case 4:
                stampa(numeri);
                break;
            case 0: 
                return false;
        }
    }

    return 0;
}