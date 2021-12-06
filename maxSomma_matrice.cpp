//matrice 4*4 di interi caricato dall'utente, trovare la riga e la colonna con somma piu alta 
#include <iostream>
using namespace std;

float controllo_virgola(float x)
{
    if(x == (float)(int) x)
    {
        return (int)x;
    }
    else 
        return x;
}

int main()
{
    float matrice[4][4];
    float somma=0;
    float max_riga=0;
    float max_colonna=0;
    int riga,colonna;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<"Inserisci un numero in posizione ["<< i <<"]["<< j <<"] :";
            cin>>matrice[i][j];
        }
        cout<<endl;
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            somma += matrice[i][j];
        }
        if(somma>max_riga) //trovo la riga con la somma più alta e l'indice di questa
        {
            max_riga=somma;
            riga=i;
        }
        somma=0;
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            somma += matrice[j][i];
        }
        if(somma>max_colonna) //trovo la colonna con la somma più alta e l'indice di questa
        {
            max_colonna=somma;
            colonna=i;
        }
        somma=0;
    }

    cout<<"\nLa matrice e' formata da :\n";
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {   
            if(matrice[i][j] == (float)(int)matrice[i][j])
            {
                matrice[i][j] = (int)matrice[i][j]; //controllo se il numero è effetivamente decimale o meno
            }
            cout<<matrice[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\nLa riga con la somma piu' alta e' la riga ["<< riga <<"] con valore :"<<controllo_virgola(max_riga)<<"\nLa colonna con la somma piu' alta e' la colonna ["<< colonna <<"] con valore :"<<controllo_virgola(max_colonna);
    if(max_riga>max_colonna) 
    {
        cout<<"\nLa somma con valore piu' alto tra righe e colonne e' "<<controllo_virgola(max_riga)<<" e si trova nella riga ["<< riga <<"]";
    }
    else if(max_riga == max_colonna)
    {
        cout<<"La somma più alta dei valori di riga e colonna sono uguali";
    }
    else
    {
        cout<<"\nLa somma con valore piu' alto tra righe e colonne e' "<<controllo_virgola(max_colonna)<<" e si trova nella colonna ["<< colonna <<"]";
    }

    return 0;
}