#include <iostream>
using namespace std;

int main()
{
    int matrix[3][4];
    int massimi[3] = {0};
    int massimo = 0;
    int index[3][2];
    int posizione;

    for(int i=0;i<3;i++)
    {   
        for(int j=0;j<4;j++)
        {
            cout<<"Inserisci il numero in posizione ["<< i <<"]["<< j <<"]:";
            cin>>matrix[i][j];
        }
        cout<<"\n";
    }

    cout<<"La matrice e' quindi formata da :\n";
    for(int i=0;i<3;i++)
    {   
        for(int j=0;j<4;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }

    for(int i=0;i<3;i++)
    {   
        for(int j=0;j<4;j++)
        {
            if(matrix[i][j] > massimi[i])
            {
                massimi[i] = matrix[i][j];
                index[i][0] = i;
                index[i][1] = j;
            }
        }
    }

    for(int i=0;i<3;i++)
    {
        if(massimi[i] > massimo)
        {
            massimo = massimi[i];
            posizione = i;
        }
    }

    cout<<"\nI massimi sono :\n";
    for(int  i=0;i<3;i++)
    {
        cout<<massimi[i]<<" in posizione ["<<index[i][0]<<"]["<<index[i][1]<<"]\n";
    }
    cout<<"Il numero piu' grande tra tutti e' :"<<massimo<<" nella posizione ["<<index[posizione][0]<<"]["<<index[posizione][1]<<"]";

    return 0;
}