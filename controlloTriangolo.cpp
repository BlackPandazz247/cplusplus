#include <iostream>
using namespace std;

int main()
{
    int l1,l2,l3;

    cout<<"Insersici i lati :"<<endl;
    cin>>l1>>l2>>l3;

    if(((l2+l3)>l1) && ((l1+l2)>l3) && ((l1+l3)>l2)){
        if((l1==l2) && (l2==l3)){
            cout<<"e' un triangolo equilatero ";
        }
        else if(l1==l3 || l1==l2 || l2==l3){
            cout<<"e' un triangolo isoscele";
        }
        else{
            cout<<"e' un triangolo scaleno";
        }
    }
    else{
        cout<<"non e' un triangolo";
    } 

    return 0;
}