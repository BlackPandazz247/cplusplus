#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string vettore[strlen("Gioele")] = {"Gioele sei un pitbull ","Gioele sei un pitbull ","Gioele sei un pitbull ","Gioele sei un pitbull ","Gioele sei un pitbull ","Gioele sei un pitbull "};

    for(int i=0;i<20000;i++)
    {
        for(int i=0;i<strlen("Gioele");i++)
        {
            cout<<vettore[i]; 
        }
    }

    cout<<"\n";
    
    system("pause");

    return 0;
}