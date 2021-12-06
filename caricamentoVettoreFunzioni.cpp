//caricare un vettore usando una funzione 
#include <iostream>
#include <typeinfo>

using namespace std;

int contatore=1;

void caricamento (double *vettore)
{
        do
        {
            cout<<"Inserisci il "<< contatore << " numero :";
            cin>>*vettore;
        }while(typeid(vettore) == typeid(char));
    contatore++;
}

int main()
{
    int dimensione_vettore;

    do
    {
        cout<<"Inserisci la dimensione del vettore :";
        cin>>dimensione_vettore;
    }while (dimensione_vettore <= 1 || typeid(dimensione_vettore) == typeid(char));
      
    double vettore[dimensione_vettore];

    for(int i=0;i<dimensione_vettore;i++)
    {
        caricamento(&vettore[i]);
    }

    cout<<endl;
    for(int i=0;i<dimensione_vettore;i++)
    {
        cout<<"Il "<< (i+1) <<" numero inserito e' :"<< vettore[i] << endl;
    }
    
    return 0;
}