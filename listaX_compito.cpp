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

lista* deleteTop(lista* riferimento)  //elimina il primo nodo
{
    if(riferimento == NULL)  //controllo se la lista è vuota
        cout<< "La lista e' vuota\n\n";
    else
    {
       lista* sonda = riferimento;
        riferimento = sonda->next;  //sposto il riferimento al secondo nodo dato che il primo sarà eliminato
        delete sonda;   //elimino il primo nodo 

        return riferimento; 
    }
    
}

lista* deleteCoda(lista* riferimento)   //elimina l'ultimo nodo
{
    if(riferimento == NULL)  //controllo se la lista è vuota
        cout<< "La lista e' vuota\n\n";
    else
    {
        lista* sonda = riferimento;
        lista* sondaPrev = NULL;

        if(sonda->next == NULL)       //controllo se la lista ha solo un nodo
            return deleteTop(riferimento); //se la lista ha solo il primo elemento chiamo la funzione per eliminare in testa

        while(sonda->next != NULL)  //faccio arrivare la sonda fino all'ulitmo nodo
        {
            sondaPrev = sonda;
            sonda = sonda->next;
        }
        sondaPrev->next = NULL;  //faccio puntare il penultimo nodo a NULL in modo da staccare l'ultimo nodo dalla lista 
        delete sonda;      //elimino l'ultimo nodo della lista

        return riferimento;
    }
    
}

lista* deleteAt(lista* riferimento)  //elimina un nodo in una determinata posizione
{
    if(riferimento == NULL)  //controllo se la lista è vuota
        cout<< "La lista e' vuota\n\n";
    else
    {
        lista* sonda = riferimento;
        lista* sondaPrev = NULL;
        int index;

        cout<< "In che posizione si trova il numero da eliminare: ";
        cin>>index;

        if(index == 1)  //se l'utente vuole eliminare il numero in prima posizione chiamo la funzione per eliminare in testa
            return deleteTop(riferimento);

        for(int i=0; i<index-2 ; i++)  //itero la lista fino ad arrivare al nodo precedente quello da eliminare
        {
            sonda = sonda->next;
        }

        sondaPrev = sonda->next->next;  //creo una sonda al nodo successivo quello da elimianre
        delete sonda->next;     //elimino il nodo
        sonda->next = sondaPrev;    //collego il nodo precedente al nodo elimianto con il suo successivo

        return riferimento;
    }
    
}

lista* deleteGiven(lista* riferimento)  //elimina un nodo con un determinato valore
{
    if(riferimento == NULL)  //controllo se la lista è vuota
        cout<< "La lista e' vuota\n\n";
    else
    {
        int key;
        lista* sonda = riferimento;
        lista* sondaPrev = NULL;

        cout<< "Quale numero vuoi eliminare? :";
        cin>> key;

        while(sonda != NULL && sonda->data != key)  //itero la lista finche non arrivo alla fine o finche non trovo ìl valore scelto dall'utente
        {
            sondaPrev = sonda;
            sonda = sonda->next;
        }
        if(sonda == NULL) //se arrivo alla fine della lista notifico all'utente che il numero non è stato trovato
            cout<<"Il numero non esiste\n";
        else
        { 
            sondaPrev->next = sonda->next; //collego il nodo precedente a quello da eliminare con il successivo
            delete sonda;   //elimino il nodo
        }

        return riferimento;
    }
}

int search(lista* riferimento, int key)  //ritorna la posizione del nodo con il valore dato 
{
    if(riferimento == NULL)  //controllo se la lista è vuota
        cout<< "La lista e' vuota\n\n";
    else
    {
        lista* sonda = riferimento;
        int index = 1; //conta la posizione in cui mi trovo nella lista, è inizializzata a 1 e non 0

        while(sonda != NULL)  //itero la lista fino all'ultimo elemento
        {
            if(sonda->data == key) //se il nodo corrente ha il valore scelto dall'utente ne torno la posizione
                return index;
            
            sonda = sonda->next;
            index++;
        }
        if(sonda == NULL) //se nella lista non ho trovato il valore scelto dall'utente torno il valore 0 per notificare che non esiste
            return 0;
    }
}

int main()
{
    lista* list = NULL;  //creo una lista vuota
    int menu;  //variabile dello switch

    while(true)
    {
        cout<<"1)Inserisci un valore in testa\n2)Inserisci un valore in coda\n";
        cout<<"3)Inserisci un valore in una posizione a tua scelta\n";
        cout<<"4)Stampa la lista\n";
        cout<<"5)elimina il primo valore\n6)elimina l'ultimo valore\n";
        cout<<"7)elimina un valore in una posizione a tua scelta\n8)elimina un determinato valore\n";
        cout<<"9)cerca la posizione di un valore\n";
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
                list = deleteTop(list); //aggiorno la lista con quello che ritorna la funzione 
                cout<< endl;
                break;
            case 6:
                list = deleteCoda(list);    //aggiorno la lista con quello che ritorna la funzione 
                cout<< endl;
                break;
            case 7:
                list = deleteAt(list);    //aggiorno la lista con quello che ritorna la funzione
                break;
            case 8:
                list = deleteGiven(list);    //aggiorno la lista con quello che ritorna la funzione
                break;
            case 9:
                int key;
                cout<<"Quale valore vuoi cercare? :";
                cin>>key;

                if(search(list, key) == 0)  //se la funzione torna il valore 0 la key non esiste 
                    cout<<"Il valore "<< key <<" non esiste";
                else
                    cout<<"Il valore si trova nella "<< search(list, key) <<" posizione\n\n";
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