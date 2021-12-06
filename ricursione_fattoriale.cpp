#include <iostream>
using namespace std;

int fact(int n)
{
    if(n > 0){
        return n*fact(n-1);
    }
    else{
        return 1;
    }
}

int main()
{
    int n;

    cout<<"Inserisci il numero di cui vuoi ricavare il fattoriale :";
    cin>>n;
    cout<<"\nIl fattoriale di "<< n << " e' :"<<fact(n);

    return 0;
}