#include <iostream>
using namespace std;

string converti_mese(string mese)
{
    if(mese == "a")
    {
        mese = "Gennaio";
        return mese;
    }
    else if(mese == "b")
    {
        mese = "Febbraio";
        return mese;
    }
    else if(mese == "c")
    {
        mese = "Marzo";
        return mese;
    }
    else if(mese == "d")
    {
        mese = "Aprile";
        return mese;
    }
    else if(mese == "e")
    {
        mese = "Maggio";
        return mese;
    }
    else if(mese == "h")
    {
        mese = "Giugno";
        return mese;
    }
    else if(mese == "l")
    {
        mese = "Luglio";
        return mese;
    }
    else if(mese == "m")
    {
        mese = "Agosto";
        return mese;
    }
    else if(mese == "p")
    {
        mese = "Settembre";
        return mese;
    }
    else if(mese == "r")
    {
        mese = "Ottobre";
        return mese;
    }
    else if(mese == "s")
    {
        mese = "Novembre";
        return mese;
    }
    else if(mese == "t")
    {
        mese = "Dicembre";
        return mese;
    }
    else 
    {
        mese = "!ERRORE!";
        return mese;
    }
}

int main()
{
    string cod_fiscale;

    cout<<"Inserisci il codice fiscale :";
    cin>>cod_fiscale;

    string anno_nascita = cod_fiscale.substr(6,2);
    string mese_nascita = cod_fiscale.substr(8,1);
    string giorno_nascita = cod_fiscale.substr(9,2);
    string carattere_controllo = cod_fiscale.substr(15,1);
    int lunghezza = cod_fiscale.size();

    if(anno_nascita[0] == '0')
    {
        anno_nascita = "20"+anno_nascita;
    }
    else
    {
        anno_nascita = "19"+anno_nascita;
    }
    
    cout<<"\nIl codice fiscale e' formato da "<< lunghezza <<" caratteri";
    cout<<"\nSei nato il "<< giorno_nascita << " " << converti_mese(mese_nascita) << " " << anno_nascita;
    cout<<"\nCarattre di controllo :"<< carattere_controllo;

    return 0;
}