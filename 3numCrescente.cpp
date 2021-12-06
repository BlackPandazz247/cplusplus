#include <iostream>
using namespace std;

int main()
{
    int n1,n2,n3,t;
    cout<<"Inserisci i 3 numeri da ordinare :"<<endl;
    cin>>n1>>n2>>n3;

    if(n1<=n2 && n1<=n3){}
    if(n2<=n1 && n2<=n3){
        t=n1;
        n1=n2;
        n2=t;
    }
    if(n3<=n1 && n3<=n2){
        t=n1;
        n1=n3;
        n3=t;
    }
    if(n2>n3){
        n2=t;
        n2=n3;
        n3=t;
    }

    cout<<"\nI numeri in ordine crescente sono :"<<endl;
    cout<<n1<<" "<<n2<<" "<<n3;

    return 0;
}