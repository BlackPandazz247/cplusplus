#include <iostream>
using namespace std;

struct s_fract
{
    int num;
    int deno;
}risultato;

int mcd(int a, int b)
{   
    int mcd;
    for(int i=1;i<= a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
           mcd=i; 
        }
    }
    return mcd;
}

int main()
{   
    int num1,num2,deno1,deno2,mcm;
    char scelta;

    cout<<"Premi * per moltiplicare, + per sommare, - per sottrarre,/ per dividere :";
    ERRORE:
    cin>>scelta;

    switch(scelta)
    {
        case '+':
        cout<<"Inserisci il numeratore e il denominatore della prima frazione :\n";
        cin>>num1;cout<<"-\n";
        cin>>deno1;
        cout<<"Inserisci il numeratore e il denominatore della seconda frazione :\n";
        cin>>num2;cout<<"-\n";
        cin>>deno2;
    
        mcm = (deno1*deno2) / mcd(deno1,deno2);
    
        risultato.deno = mcm;
        risultato.num = (mcm/deno1*num1) + (mcm/deno2*num2);
        break;

        case '-':
        cout<<"Inserisci il numeratore e il denominatore della prima frazione :\n";
        cin>>num1;cout<<"-\n";
        cin>>deno1;
        cout<<"Inserisci il numeratore e il denominatore della seconda frazione :\n";
        cin>>num2;cout<<"-\n";
        cin>>deno2;
    
        mcm = (deno1*deno2) / mcd(deno1,deno2);
    
        risultato.deno = mcm;
        risultato.num = (mcm/deno1*num1) - (mcm/deno2*num2);
        break;

        case '*':
        cout<<"Inserisci il numeratore e il denominatore della prima frazione :\n";
        cin>>num1;cout<<"-\n";
        cin>>deno1;
        cout<<"Inserisci il numeratore e il denominatore della seconda frazione :\n";
        cin>>num2;cout<<"-\n";
        cin>>deno2;
    
        risultato.deno = deno1*deno2;
        risultato.num = num1*num2;
        break;

        case '/':
        cout<<"Inserisci il numeratore e il denominatore della prima frazione :\n";
        cin>>num1;cout<<"-\n";
        cin>>deno1;
        cout<<"Inserisci il numeratore e il denominatore della seconda frazione :\n";
        cin>>num2;cout<<"-\n";
        cin>>deno2;
    
        risultato.deno = deno1*num2;
        risultato.num = num1*deno2;
        break;

        default:
        cout<<"ERRORE, inserisci un nuovo carattere :";
        goto ERRORE;
    }

    cout<<"\nIl risultato della tua frazione e' :\n"<<risultato.num<<"\n-\n"<<risultato.deno;

    if(risultato.num%mcd(risultato.num,risultato.deno)==0 && risultato.deno%mcd(risultato.num,risultato.deno)==0 && mcd(risultato.num,risultato.deno) != 1)
    {
        cout<<"\nIl risultato, semplificato per "<<mcd(risultato.num,risultato.deno)<<", e' :\n"<<(risultato.num/mcd(risultato.num,risultato.deno))<<"\n-\n"<<(risultato.deno/mcd(risultato.num,risultato.deno));
    }

    system("pause");
    return 0;
}