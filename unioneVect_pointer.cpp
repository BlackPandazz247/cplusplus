#include <iostream>
using namespace std;

int* unisci (int* pointer1, int* pointer2, int dim1, int dim2, int dim)
{
    int* array = new int[dim];
    
    for(int i=0; i<dim1 ; i++)
    {
        array[i] = pointer1[i];
    }

    int j = 0;
    for(int i=dim1; i<dim ; i++)
    {
        array[i] = pointer2[j];
        j++;
    }

    return array;
}

int main()
{
    int dim1,dim2,dim;

    cout<<"Inserisci la dimensione del primo vettore: ";
    cin>>dim1;
    
    int vect1 [dim1];
    for(int i=0; i<dim1 ; i++)
    {
        cout<<"Inserisci il "<< (i+1) <<" numero: ";
        cin>>vect1[i];
    }

    cout<<"\nInserisci la dimensione del secondo vettore: ";
    cin>>dim2;

    int vect2 [dim2];
    for(int i=0; i<dim2 ; i++)
    {
        cout<<"Inserisci il "<< (i+1) <<" numero: ";
        cin>>vect2[i];
    }

    dim = dim1 + dim2;

    int* pointer = unisci(vect1, vect2, dim1, dim2, dim);

    cout<<"\nL'array finale e' quindi formato da: \n";
    for(int i=0; i<dim ; i++)
    {
        cout<<"["<< i <<"] = "<< pointer[i] <<endl;
    }

    return 0;
}