#include <iostream>
using namespace std;

int main()
{
    double vettore[10];
    int j;

    for(int i=0;i<10;i++)
    {
        cout<<"Inserisci il "<< (i+1) <<" numero :";
        cin>>vettore[i];
    }

    cout<<"\nI numeri che non si ripetono sono :\n";
    for(int i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(vettore[i] == vettore[j] && i!=j)
            {
                break;
            }
        }
        if(j==10)
        {
            cout<<vettore[i]<<endl;
        }
    }

    return 0;
}