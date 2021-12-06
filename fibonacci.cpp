#include <iostream>
using namespace std;

unsigned long int fibonacci (int i)
{
    if(i == 0)
    {
        return 0;
    }
    if(i == 1)
    {
        return 1;
    }
    
    return fibonacci(i - 1) + fibonacci(i - 2);
}

int main()
{
    int i;
    
    cout<<"Inserisci un numero: ";
    cin>>i;

    cout<<"Il "<< i << " numero di fibonacci e': "<< fibonacci(i);

    return 0;
}