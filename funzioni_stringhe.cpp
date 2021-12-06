#include <iostream>
#include <string>
using namespace std;

int main()
{
    //lunghezza di una stringa
    string lunghezza = "ciao";
    cout<< lunghezza.length() <<",variabile.size e' equivalente "<< endl;

    //test di una stringa vuota, restituisce true (1) se la stringa è vuota, altrimenti restituisce false (0)
    string vuoto = "";
    cout<< vuoto.empty() << endl;

    //per unire più stringhe si usa il +
    string unione = "hello";
    cout<< unione + " " + "world" <<endl;

    //le stringhe si possono confrontare con i caratteri == != > < >= <= 
    
    //inserimento di una stringa
    string vittorio = "Vittorio Secondo";
    string emanuele = " Emanuele";
    vittorio.insert(8, emanuele);
    cout<< vittorio <<endl;

    //estrazione del contenuto di una stringa
    string vittorio_secondo ="Vittorio Secondo";
    string sottostringa = vittorio_secondo.substr(9,7);
    cout << sottostringa <<endl;

    //cancellazione del contenuto di una stringa
    string s ="Vittorio Secondo";
    s.erase(8,8);
    cout<< s <<endl;

    //sostituzione di una stringa
    string umberto ="Vittorio Secondo";
    umberto.replace(0,8,"Umberto");
    cout<< umberto <<endl;

    //ricerca di una sottostringa
    string se ="Vittorio Secondo";
    int a = se.find('e',0); //0 indica da che posizione iniziare a cercare e poi da la posizione del risultato
    cout<< a <<endl;

    return 0;
}