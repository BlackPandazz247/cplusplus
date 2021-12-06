#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct dati
{
    string nome;
    string cognome;
    int numeroTelefono;
    string prefisso;
};

int main()
{
    dati persone;
    int scelta,posizione = 0;

    do
    {   
        scelta = 0;
        cout<<"\nInserisci 1 per inserire un nuovo numero ;"
        <<"\nInserisci 2 per modificare un numero ;"
        <<"\nInserisci 3 per eliminare un numero ;"
        <<"\nInserisci 4 per chiudere il programma :";
        cin>>scelta;
        switch(scelta)
        {
            case 1:
            {
                ofstream rubrica;
                rubrica.open("rubrica.txt",ios::app);
                cout<<"\nInserisci il nome della persona:";
                cin>>persone.nome;
                cout<<"Inserisci il cognome :";
                cin>>ws;
                getline(cin,persone.cognome);
                cout<<"prefisso numero di telefono :";
                cin>>persone.prefisso;
                cout<<"Numero di telefono :";
                cin>>persone.numeroTelefono;
                rubrica<<persone.nome<<" "<<persone.cognome<<'\t'<<persone.prefisso<<" "<<persone.numeroTelefono<<'\n';
                rubrica.close();
                break;
            }

            case 2:
            {
                fstream rubrica;
                rubrica.open("rubrica.txt",ios::in);
                string cognomeSearch,line,cognomeNuovo;
                cout<<"\nInserisci il cognome da ricercare :";
                cin>>ws;
                getline(cin,cognomeSearch);

                while(getline(rubrica,line))
                {
                    getline(rubrica,line); 
                    posizione = line.find(cognomeSearch, 0);
                } 
                if(posizione != string::npos)
                {
                    cout<<"Trovato "<<cognomeSearch<<" alla posizione "<<posizione<<endl;
                    rubrica.close();
                    rubrica.open("rubrica",ios::out);
                    cout<<"Inserisci il nuovo cognome :";
                    cin>>cognomeNuovo;
                    rubrica.seekp(posizione);
                    rubrica<<cognomeNuovo;
                    rubrica.close();
                }
                else
                    cout<<"stringa non trovata\n";
                rubrica.close();
                break;
            }
        }
    }while(scelta != 4);
    
    return 0;
}