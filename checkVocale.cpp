#include <iostream>
using namespace std;

int main()
{
    char lettera;
    cout<<"Inserisci una lettera :";
    cin>>lettera;

    if(lettera=='a' || lettera=='e' || lettera=='i' || lettera=='o' || lettera=='u'){
        cout<<lettera<<" e' una vocale";
    }
    else{
        cout<<lettera<<" non e' una vocale";
    }

    return 0;
}