#include <iostream>
using namespace std;

int main()
{
    int matrix[4][4] = {{25,03,2004,17},{25,03,2004,17},{20,04,1889,132},{20,04,1889,132}};
    int appoggio[4];

    cout<<"La matrice e' formata da :\n";
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }

    for(int f=2,i=0;i<2;i++,f++)
    {  
        for(int n=0,j=0;j<4;j++,n++)
        {
            appoggio[n] = matrix[i][j];
            matrix[i][j] = matrix[f][j];
            matrix[f][j] = appoggio[n];
        }
    }

    cout<<"\n\nLa matrice invertita e' formata da :\n";
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}