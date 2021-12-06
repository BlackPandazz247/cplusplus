#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    char restart,variabile;
    int facce;
    
    ERRORE:
    cout<<"Vuoi lanciare un dado a 6 facce, a 20  o entambi ? (1,2,3):";
    cin>>facce;

    switch(facce)
    {
        case 1:
        do{
            cout<<"Vuoi lanciarne 2 ? (y/n):";
            cin>>variabile;
            if(variabile == 'y')
            {
                srand(time(NULL));
                int dado1=rand()%6+1;
                int dado2=rand()%6+1;

                if(dado1 == dado2){
                    cout<<"E' uscita una coppia di "<<dado2;
                }else{
                    cout<<"Sono usciti "<<dado1<<" e "<<dado2;
                }
            }
            else
            {
                srand(time(NULL));
                int dado=rand()%6+1;
                cout<<"E' uscito "<<dado;
            }

            cout<<"\nLanciare di nuovo ? (y/n):";
            cin>>restart;
            cout<<endl;
        }while(restart=='y');
        break;

        case 2:
        do{
            cout<<"Vuoi lanciarne 2 ? (y/n):";
            cin>>variabile;
            if(variabile == 'y')
            {
                srand(time(NULL));
                int dado1=rand()%20+1;
                int dado2=rand()%20+1;

                if(dado1 == dado2){
                    cout<<"E' uscita una coppia di "<<dado2;
                }else{
                    cout<<"Sono usciti "<<dado1<<" e "<<dado2;
                }
            }
            else
            {
                srand(time(NULL));
                int dado=rand()%20+1;
                cout<<"E' uscito "<<dado;
            }
            
            cout<<"\nLanciare di nuovo ? (y/n):";
            cin>>restart;
            cout<<endl;
        }while(restart=='y');
        break;

        case 3:
        do{
            srand(time(NULL));
            int dado6=rand()%6+1;
            int dado20=rand()%20+1;
            
            if(dado6 == dado20){
                cout<<"E' uscita una coppia di "<<dado20;
            }else{
                cout<<"Sono usciti "<<dado6<<" e "<<dado20;
            }
            
            cout<<"\nLanciare di nuovo il dado ? (y/n):";
            cin>>restart;
            cout<<endl;
        }while(restart=='y');
        break;

        default:
        cout<<"Scelta non valida."<<endl;
        goto ERRORE;
        break;
    }
    
    system("pause");
    return 0;
}