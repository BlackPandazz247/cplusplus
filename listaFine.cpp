#include<iostream>
using namespace std;
 
struct numeri
{   
    int valore;
    numeri* next;
};
 
numeri* inserisci(numeri* rif)
{
    numeri* temp = new numeri; 
    
    cout<< "Inserisci numero: ";
    cin >> temp->valore;
    cout<<endl;
	temp->next = NULL;

    if (rif == NULL) // se è il primo elemento della lista
	{	
        rif = temp;
    }
    else
    {   
        numeri* x = rif;
        while(x->next != NULL)
        {
            x = x->next;
        } 
		x->next = temp;
    }
     
    return rif;
}

void stampa (numeri* rif)
{ 
    if (rif == 0) 
        cout<<"\nLa lista e' vuota.\n\n";
    else
    {
        numeri* pointer = rif;
        cout<<endl;
        while (pointer != 0)
        { 
            cout<< pointer->valore << "\n" ;
            pointer = pointer->next;
        }
        cout<<endl;
    }
}
 
int main()
{ 
    numeri* lista = NULL;
    int scelta;

    while(true)
    {
        cout<<"1)Inserisci un valore in coda\n";
        cout<<"2)Stampa la lista\n";
        cout<<"0)per uscire\n";
        cout<<"?:";
        cin>>scelta;
        switch(scelta)
        {
            case 1: 
                lista = inserisci(lista); 
                break;
            case 2: 
                stampa(lista);
                break;
            case 0: 
                return false;
        }
    }

    return 0;
}