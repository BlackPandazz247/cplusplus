#include <iostream>
#include <ctime>
using namespace std;

int main()
{   
    char restart='n';
    do{
        srand(time(NULL));
        int moneta=rand()%2;
        
        if(moneta == 0){
            cout<<"testa";
        }else{
            cout<<"croce";
        }
        cout<<"\nVuoi ripetere ?(y/n)";
        cin>>restart;
    }while(restart == 'y');
    
    system("pause");
    return 0;
}