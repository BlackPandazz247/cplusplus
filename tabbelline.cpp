#include <iostream>
using namespace std;
#define MAX 10

void caricamento(int mat[][MAX])
{
    for(int i=0;i<MAX;i++)
    {
        for(int j=0; j<MAX; j++)
        {

            mat[i][j] = (i+1)*(j+1);
        }
    }
} 

void stampa(int mat[][MAX])
{
    for (int i=0;i<MAX;i++)
    {
        cout<<"Tabellina del numero "<< (i+1) <<":\n";
        for(int j=0;j<MAX;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n\n";
    }
}

int main()
{
    int matrice[MAX][MAX];
    int num;

    caricamento(matrice);
    stampa(matrice);

    cout<<"Inserisci il numero di cui vuoi sapere la tabellina :";
    cin>>num;

    cout<<"Tabbellina del numero "<<num<<":\n";
    for(int i=1;i<=10;i++)
    {
        cout<<num*i<<" ";
    }

    return 0;
}