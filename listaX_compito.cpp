#include <iostream>
using namespace std;

struct lista{
    int data;
    lista* next;
};

lista* inserimentoTop(lista* riferimento)   //inserisco un nodo in testa alla lista
{
    lista* temp = new lista;

    cout<<"Inserisci il valore: ";
    cin>> temp->data;
    cout<< endl;
    temp->next = riferimento; //riferimento punta sempre al primo elemento della lista,qui dico che il nuovo nodo della lista deve collegarsi(puntare) all'inizio
    riferimento = temp;    //qui dico che la variabile che punta all'inizio adesso deve puntare al nuovo nodo, che è stato inserito all'inzio

    return riferimento;   //aggiorno la lista nel main
}

lista* inserimentoCoda(lista* riferimento)  //inserisco un nodo in coda
{
    lista* temp = new lista;

    cout<<"Inserisci il valore: ";
    cin>> temp->data;
    cout<< endl;
    temp->next = NULL;  //faccio collegare il nuovo nodo a nulla

    if(riferimento == NULL) //controllo se è il primo elemento della lista
        riferimento = temp;  //in caso stiamo inserendo il primo elemento della lista faccio puntare la variabile di riferimento(che punta sempre all'inizio della lista) al nodo appena creato
    else
    {
        lista* sonda = riferimento;

        while(sonda->next != NULL) //faccio il ciclo fintanto che la mia sonda non arriva all'ultimo elemento della lista, che punterà a null
        {
            sonda = sonda->next; 
        }

        sonda->next = temp;   //faccio puntare l'ultimo elemento della lista al nuovo nodo
    }

    return riferimento;   //aggiorno la lista nel main
}

lista* insert(lista* riferimento)   //inserisco un nodo in una determinata posizione
{
    lista* temp = new lista;
    lista* sonda = riferimento;
    int index;

    cout<<"In che posizione vuoi inserire il nuovo numero: ";
    cin>> index;

    if(index == 1)
        return inserimentoTop(riferimento); //se l'utente vuole inserire al primo elemento chiamo la funzione di inserimento in testa

    cout<<"Inserisci un valore: ";
    cin>> temp->data;
    cout<< endl;

    /*faccio arrivare la sonda al nodo precedente la posizione in cui vogliamo inserire il nuovo nodo
    faccio -2 perche oltre a dover andare al nodo precedente le liste partono da 0*/
    for(int i=0; i<index-2 ; i++)
    {
        sonda = sonda->next;
    }
    temp->next = sonda->next; //faccio collegare il nuovo nodo al nodo a cui punta la sonda
    sonda->next = temp;  //faccio collegare la sonda al nuovo nodo

    return riferimento;    //aggiorno la lista nel main
}

void stampa(lista* riferimento)  //stampa i valori della lista
{
    if(riferimento == NULL)  //controllo se la lista è vuota
        cout<< "La lista e' vuota\n\n";
    else 
    {
        lista* sonda = riferimento;

        while(sonda != NULL)  //creo una sonda che gira tutta la lista e stampa il valore di ogni nodo
        {
            cout<<sonda->data << "  ";
            sonda = sonda->next;
        }
        cout<< endl << endl;
    }
}

lista* deleteTop(lista* riferimento)  //wlimina il primo nodo
{
    lista* sonda = riferimento;
    riferimento = sonda->next;
    delete sonda;

    return riferimento;
}

lista* deleteCoda(lista* riferimento)   //elimina l'ultimo nodo
{
    lista* sonda = riferimento;
    lista* sondaPrev = NULL;

    while(sonda->next != NULL)
    {
        sondaPrev = sonda;
        sonda = sonda->next;
    }
    sondaPrev->next = NULL;
    delete sonda;

    return riferimento;
}

lista* deleteAt(lista* riferimento)  //elimina un nodo in una determinata posizione
{
    if(riferimento == NULL)
        cout<< "La lista e' vuota\n\n";

    lista* sonda = riferimento;
    lista* next = NULL;
    int index;

    cout<< "In che posizione si trova il numero da eliminare: ";
    cin>>index;

    if(index == 1)
        return deleteTop(riferimento);

    for(int i=0; i<index-2 ; i++)
    {
        sonda = sonda->next;
    }

    next = sonda->next->next;
    free(sonda->next);
    sonda->next = next;

    return riferimento;
}

lista* deleteGiven(lista* riferimento)  //elimina un nodo con un determinato valore
{
    int key;
    lista* sonda = riferimento;
    lista* sondaPrev = NULL;

    cout<< "Quale numero vuoi eliminare? :";
    cin>> key;

    while(sonda != NULL && sonda->data != key)
    {
        sondaPrev = sonda;
        sonda = sonda->next;
    }
    sondaPrev->next = sonda->next;
    delete sonda;

    return riferimento;
}

int search(lista* riferimento, int key)  //ritorna la posizione del nodo con il valore dato 
{
    lista* sonda = riferimento;
    int index = 1;

    while(sonda != NULL)
    {
        if(sonda->data == key)
            return index;
        
        sonda = sonda->next;
        index++;
    }
}

int main()
{
    lista* list = NULL;  //creo una lista vuota
    int menu;

    while(true)
    {
        cout<<"1)Inserisci un valore in testa\n2)Inserisci un valore in coda\n";
        cout<<"3)Inserisci un valore in una posizione a tua scelta\n";
        cout<<"4)Stampa la lista\n";
        cout<<"5)elimina il primo valore\n6)elimina l'ultimo valore\n";
        cout<<"7)elimina un valore in una posizione a tua scelta\n8)elimina un determinato valore\n";
        cout<<"0)exit\n:";
        cin>>menu;

        switch(menu)
        {
            case 1: 
                list = inserimentoTop(list);  //aggiorno la lista con quello che ritorna la funzione 
                break;
            case 2:
                list = inserimentoCoda(list);   //aggiorno la lista con quello che ritorna la funzione 
                break;
            case 3: 
                list = insert(list);   //aggiorno la lista con quello che ritorna la funzione 
                break;
            case 4:
                stampa(list);
                break;
            case 5:
                list = deleteTop(list);
                cout<< endl;
                break;
            case 6:
                list = deleteCoda(list);
                cout<< endl;
                break;
            case 7:
                list = deleteAt(list);
                break;
            case 8:
                list = deleteGiven(list);
                break;
            case 0: 
                return false;  //esco dal while
            default:
                cout<< "!!Scelta invalida!!";
                break;
        }
    }

    return 0;
}