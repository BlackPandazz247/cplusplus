#include <iostream>
#include <map>
using namespace std;

int main()
{
    double vettore[10];
    map<double, int> mappa; //la mappa è una struttura dati che associa un valore ad una chiave, ad esempio posso associare a più nomi diverse età 
   
    for(int i=0;i<10;i++)
    {
        cout<<"Inserisci il "<< (i+1) << " numero :";
        cin>>vettore[i];
    }
    
    for(int i=0;i<10;i++)
    {
        mappa[vettore[i]]++; //alla mappa passo ciò che è contenuto in "vettore" in posizione [i] come chiave,il valore associato alla chiave viene automaticamente assegnato a 0,con ++ lo incremento,cosi quando nel vettore ci sara un numero uguale 0 diventerà,prima 1 e poi 2,indicando quindi che il numero è stato trovato 2 volte 
    }

    cout<<"\nGli elementi che si ripetono una sola volta sono :\n";
    for(auto x : mappa) //con 'auto' creo la coppia (pair) "x" di tipi uguali a ciò che si trova dopo ':',quindi uguali ai tipi della mappa 
    {
        if(x.second == 1)
            cout<< x.first <<endl;
    }

    return 0;
}