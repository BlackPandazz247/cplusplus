#include <iostream>
using namespace std;

unsigned long long int fact (int n)
{
    if (n > 0)
    {
        return n * fact(n-1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n, k;

    cout<<"Inserisci il numero di cui vuoi ricavare il fattoriale: ";
    cin>>n;
    cout<<"Il fattoriale di "<< n << " e' :" << fact(n);

    cout<<"\n\nInserisci i valori del coefficiente binomiale per il calcolo combinatorio:\n" << "n = ";
    cin>>n;
    cout<<"k = ";
    cin>>k; 

    cout<<"Il numero di combinazioni possibili senza ripetizioni e': " << (fact(n) / (fact(k) * fact(n - k)));
    cout<<"\nIl numero di combinazioni possibili con ripetizioni e': " << (fact((n + k) - 1) / (fact(k) * fact(n - 1)));

    return 0;
}