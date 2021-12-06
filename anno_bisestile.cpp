#include <iostream>
using namespace std;

int main()
{
    int anno;
    cout<<"Inserisci un anno :";
    cin>>anno;

    if(anno%400==0 || anno%4==0 && anno%100!=0){
        cout<<"Il "<<anno<<" e' bisestile";
    }else{
        cout<<"Il "<<anno<<" NON e' bisestile";
    }

    return 0;
}