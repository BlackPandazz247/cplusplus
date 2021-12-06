#include <iostream>
#include <string>
using namespace std;

bool controllo(string stringa)
{   
    string palindromo = stringa;
    for(int i=0;i<stringa.size();i++)
    {
        palindromo[i] = stringa[stringa.size()-i-1];
    }
    if(stringa == palindromo)
    {
        return true;
    }
    else 
    {
        return false;
    }
    
}

int main()
{   
    string stringa;

    do
    {
        cout<<"Inserisci la stringa :";
        cin>>stringa;
    }while(stringa.empty() == true);
    
    if(controllo(stringa) == true)
    {
        cout<<"La stringa che hai inserito e' palindroma";
    }
    else
    {
        cout<<"La stringa che hai inserito non e' palindroma";
    }

    return 0;
}