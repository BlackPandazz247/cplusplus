#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string vettore[strlen("Gioia")] = {"Gioia merda ","Gioia merda ","Gioia merda ","Gioia merda ","Gioia merda "};

    for(int i=0;i<20000;i++)
    {
        for(int i=0;i<strlen("Gioia");i++)
        {
            cout<<vettore[i]; 
        }
    }

    cout<<"\n";
    
    system("pause");

    return 0;
}