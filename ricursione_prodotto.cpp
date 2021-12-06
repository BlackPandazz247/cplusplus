#include <iostream>
using namespace std;

int prod(int a, int b)
{
    if(b == 1)
        return a;
    return a + prod(a, b-1);
}

int main()
{
    int a,b;

    cout<<"Inserisci a: ";
    cin>>a;
    cout<<"Inserisci b: ";
    cin>>b;

    cout<<"Il prodotto e': "<< prod(a,b);
    
    return 0;
}