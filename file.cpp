#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string nome,cognome,lavoro;
    int giornoNascita,meseNascita,annoNascita;
    fstream portfolio;
    portfolio.open("portfolio",ios::out);

    cout<<"Inserisci il tuo nome :";
    cin>>nome;
    cout<<"Inserisci il cognome :";
    cin>>ws;
    getline(cin,cognome);
    cout<<"Inserisci il giorno di nascita :";
    cin>>giornoNascita;
    cout<<"Inserisci il mese di nascita :";
    cin>>meseNascita;
    cout<<"Inserisci l'anno di nascita :";
    cin>>annoNascita;
    cout<<"Inserisci le tue esperienze lavorative :";
    cin>>ws;
    getline(cin,lavoro);
    
    portfolio<<"Nome e cognome :"<<nome<<" "<<cognome<<"\n"<<"Data di nascita :"<<giornoNascita<<"/"<<meseNascita<<"/"<<annoNascita<<"\n"<<"Esperienze lavorative:\n"<<lavoro;
    portfolio.close();

    return 0;
}