#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int dim;
    do
    {
        cout<<"Inserisci la dimensione del vettore :";
        cin>>dim;
    }while(dim<=0);
    
    cout<<"\n";

    double vettore[dim];
    for(int i=0;i<dim;i++)
    {
        cout<<"Inserisci il numero in posizione ["<< i <<"] :";
        cin>>vettore[i];
    }

    cout<<"\n";

    for(int i=1;i<dim;i++)
    {
        if(vettore[i] < pow(vettore[i-1],2))
        {
            cout<<"Il numero "<< vettore[i] <<", in posizione ["<< i <<"], e' minore del quadrato del suo precedente. "<< vettore[i-1] <<" ("<< pow(vettore[i-1],2) << ")\n";
        }
    }
    
    return 0;
}