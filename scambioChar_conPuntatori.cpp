//Fare una funzione di scambio di due caratteri, come parametri della funzione, tramite l'uso di puntatori
#include <iostream>
using namespace std;

void scambio(char *a,char *b) //dichiaro i parametri formali della funzione come puntatori che puntano all'indirizzo dei parametri effettivi 
{
    char temp = *b;
    *b = *a;
    *a = temp;
}

int main()
{
    char a , b;

    cout<<"Inserisci due caratteri :\n";
    cin >> a >> b;

    cout<<"\nPrima dello scambio :\n";
    cout<<"A = "<< a <<" B = "<< b;

    scambio(&a, &b);

    cout<<"\nDopo lo scambio :\n";
    cout<<"A = "<< a <<" B = "<< b;

    return 0;
}