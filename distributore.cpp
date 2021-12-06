#include <iostream>
using namespace std;

int main()
{
    int scelta,moneta,totale=0,resto; 

    do
    {
        cout<<"Inserisci 1 per prendere l'acqua,2 per prendere una lattina, 3 per prendere una bibita in bottiglietta, 4 per uscire :";
        cin>>scelta;

        switch(scelta)
        {
            case 1:
            RIPETI1:
            do
            {
                cout<<"Inserisci la moneta (1,5,10,20,50,1euro,2euro):";
                cin>>moneta;
            }while(moneta!=1 && moneta!=5 && moneta!=10 && moneta!=20 && moneta!=50 && moneta!=100 && moneta!=200);
            totale += moneta;
            if(totale<50)
            {
                cout<<"totale :"<<totale<<"\tinsufficente, inserisci un altra moneta\n";
                goto RIPETI1;
            }
            cout<<"Acqua erogata,";

            if(totale>50)
            {
                resto = totale - 50;
                cout<<"il resto e' "<<resto;
            }
            else
            {
                cout<<"il resto e' 0";
            }
            break;

            case 2:
            RIPETI2:
            do
            {
                cout<<"Inserisci la moneta (1,5,10,20,50,1euro,2euro):";
                cin>>moneta;
            }while(moneta!=1 && moneta!=5 && moneta!=10 && moneta!=20 && moneta!=50 && moneta!=100 && moneta!=200);
            totale += moneta;
            if(totale<80)
            {
                cout<<"totale :"<<totale<<"\tinsufficente, inserisci un altra moneta\n";
                goto RIPETI2;
            }
            cout<<"Bibita erogata,";

            if(totale>80)
            {
                resto = totale - 80;
                cout<<"il resto e' "<<resto;
            }
            else
            {
                cout<<"il resto e' 0";
            }
            break;

            case 3:
            RIPETI3:
            do
            {
                cout<<"Inserisci la moneta (1,5,10,20,50,1euro,2euro):";
                cin>>moneta;
            }while(moneta!=1 && moneta!=5 && moneta!=10 && moneta!=20 && moneta!=50 && moneta!=100 && moneta!=200);
            totale += moneta;
            if(totale<100)
            {
                cout<<"totale :"<<totale<<"\tinsufficente, inserisci un altra moneta\n";
                goto RIPETI3;
            }
            cout<<"Bottiglia erogata,";

            if(totale>100)
            {
                resto = totale - 100;
                cout<<"il resto e' "<<resto;
            }
            else
            {
                cout<<"il resto e' 0";
            }
            break;

            case 4:break;
            default:
            cout<<"Errore\n";
            break;
        }
    }while(scelta<1 || scelta>3 && scelta!=4);

    return 0;
}