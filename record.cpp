#include <iostream>
#include <string>
using namespace std;

struct s_citta
{
    string regione;
    string provincia;
    string patrono;
    string nome;
    struct popolazione
    {
        int maschi;
        int femmine;
        int totale;
    }popolo;
    float superficie;
    float densita;
    int CAP;
    int altitudine;
};

int main()
{
    s_citta citta[2];

    for(int i=0;i<2;i++)
    {
        cout<<"Inserisci il nome della "<< (i+1) <<" citta' :";
        cin>>ws;
        getline(cin,citta[i].nome);
        cout<<"Inserisci la regione in cui si trova "<< citta[i].nome <<":";
        getline(cin,citta[i].regione);
        cout<<"Inserisci la provincia in cui si trova "<< citta[i].nome <<":";
        getline(cin,citta[i].provincia);
        cout<<"Inserisci il patrono di "<< citta[i].nome <<":";
        getline(cin,citta[i].patrono);
        cout<<"Inserisci il numero di abitanti maschi di "<< citta[i].nome <<":";
        cin>>citta[i].popolo.maschi;
        cout<<"Inserisci il numero di femmine di "<< citta[i].nome <<":";
        cin>>citta[i].popolo.femmine;
        cout<<"Inserisci la superficie di "<< citta[i].nome <<":";
        cin>>citta[i].superficie;
        cout<<"Inserisci la densita demografica di "<< citta[i].nome <<":";
        cin>>citta[i].densita;
        cout<<"Inserisci il CAP di "<< citta[i].nome <<":";
        cin>>citta[i].CAP;
        cout<<"Inserisci l'altitudine di "<< citta[i].nome <<":";
        cin>>citta[i].altitudine;
        cout<<"\n";
        citta[i].popolo.totale = citta[i].popolo.maschi + citta[i].popolo.femmine;
    }

    for(int i=0;i<2;i++)
    {
        cout<<citta[i].nome;
        cout<<"\nIn "<< citta[i].regione;
        cout<<"\nIn provincia di "<< citta[i].provincia;
        cout<<"\nPopolazione :"<< citta[i].popolo.totale <<" (M:"<< citta[i].popolo.maschi <<" F:"<< citta[i].popolo.femmine <<")";
        cout<<"\nHa una superficie di "<< citta[i].superficie <<" Km2";
        cout<<"\n"<< citta[i].densita <<" abitanti per Km2";
        cout<<"\nCAP :"<< citta[i].CAP;
        cout<<"\nAltitudine :"<< citta[i].altitudine <<" m s.l.m.";
        cout<<"\nIl patrono di "<< citta[i].nome <<" e' "<<citta[i].patrono;
        cout<<"\n\n";
    }

    return 0;
}