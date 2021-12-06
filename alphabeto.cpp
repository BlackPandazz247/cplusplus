#include <iostream>
#include <cctype>
using namespace std;

void CaricamentoVettore(char vettore[])
{
    for(int i=0,j=97;i<9;i++,j++)
    {
        vettore[i]=j;
    }
}

void caricamento(char matrice[][3],char vettore[])
{   
    int x=0;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++,x++)
        {
           matrice[i][j]=vettore[x];
        }
    }
}

void stampa(char matrice[][3])
{
    cout<<"Le prime 9 lettere dell'alfabeto sono :\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<matrice[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void maiuscola(char matrice[][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           matrice[i][j]=toupper(matrice[i][j]);
        }
    }
}

void StampaMaiuscola(char matrice[][3])
{
    cout<<"\nLe prime 9 lettere dell'alfabeto in maiuscolo sono :\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<matrice[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main()
{   
    char tullio[9];
    char matrice[3][3];

    CaricamentoVettore(tullio);
    caricamento(matrice,tullio);
    stampa(matrice);
    maiuscola(matrice);
    StampaMaiuscola(matrice);

    return 0;
}