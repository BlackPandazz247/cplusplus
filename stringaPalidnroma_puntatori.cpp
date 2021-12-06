//Data una stringa, utilizzare i puntatori per determinare è palindroma
#include <iostream>
#include <string>
using namespace std;

bool controllo(char *pi, char *pf, int dim)
{   
    bool valore;
    
    for(int i=0;i<((dim/2)-1);i++)
    {
        if(*pi == *pf)
        {
            valore = true;
        }
        else
        {
            valore = false;
        }
    }
    
    return valore;
}

int main()
{   
    string stringa;

    do
    {
        cout<<"Inserisci la stringa :";
        cin>>stringa;
    }while(stringa.empty() == true);
    
    if(controllo(&stringa[0], &stringa[stringa.size()-1], stringa.size()) == true)
    {
        cout<<"La stringa che hai inserito e' palindroma";
    }
    else
    {
        cout<<"La stringa che hai inserito non e' palindroma";
    }

    return 0;
}