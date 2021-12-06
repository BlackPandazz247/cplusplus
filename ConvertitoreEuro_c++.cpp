/*Programma che converte gli euro in un altra valuta oppure un altra valuta in euro*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double euro,cambio,valuta;
    int x; //variabile dello switch che converte i numeri 
    int scelta; //variabile dello switch che chiede quale tipo di conversione l'utente vuole eseguire
	char restart;
	
	do
	{  
    	do
        {
	        cout<<"Premi 1 per convertire gli euro in un altra valuta o premi 2 per convertire un altra valuta in euro : ";
	        cin>>scelta;
	    }while(scelta<=0 || scelta>2);
	    
	    switch(scelta)
	    {   
		    //conversione da euro a altra valuta, continua fino alla riga 106
		    case 1: 
	        cout<<"Scrivi il valore in euro da convertire :\n";
	        cin>>euro;
	    
	        do
	        {
	            cout<<"\nScegli la valuta di cui vuoi sapere il cambio\n";
                cout<<"Inserisci :\n1)  per Dollaro USA (USD)\n2)  per Sterlina Britannica (GBP)\n3)  per Yen Giapponese (JPY)\n4)  per Franco Svizzero (CHF)\n5)  per Dollaro Canadese (CAD)\n6)  per Dollaro Australiano (AUD)\n7)  per BitCoin (BTC)\n8)  per Vecchia Lira Italiana (ITL)\n9)  per Peso Messicano (MXN)\n10)  per Real Brasiliano (BRL)\n11) per Rupia Indiana (INR)\n12) per Won Sudcoreano (KRW)\n13) per Yuan Cinese (CNY)\n14) per Dollaro Hongkonghese (HKD)\n\n";
	            cin>>x;
	        }while(x<=0 || x>14);
	    
	        switch(x)
	        {
	    	    case 1:
			    cambio=euro*1.18423;
			    cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" USD\n\n";
			    break;
			
		        case 2:
			    cambio=euro*0.9051;
			    cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<"GPB\n\n";
			    break;
			
		        case 3:
			    cambio=euro*126.231;
			    cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" JPY\n\n";
			    break;
		
		        case 4:
			    cambio=euro*1.07649;
			    cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" CHF\n\n";
			    break;
			
		        case 5:
			    cambio=euro*1.5706;
			    cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" CAD\n\n";
			    break;
			
		        case 6:
			    cambio=euro*1.651425;
			    cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" AUD\n\n";
			    break;
			
	            case 7:
	    	    cambio=euro*0.00010050;
	    	    cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" BTC\n\n";
	    	    break;
	    	
	            case 8:
			    cambio=euro*1936.27;
			    cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" ITL\n\n";
			    break;
			
		        case 9:
			    cambio=euro*26.036;
			    cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" MXN\n\n";
			    break;
			
		        case 10:
			    cambio=euro*6.4206;
			    cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" BRL\n\n";
			    break;
			
		        case 11:
			    cambio=euro*88.704;
			    cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" INR\n\n";
			    break;
		
		        case 12:
			    cambio=euro*1405.75;
		        cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" KRW\n\n";
			    break;
			
		        case 13:
			    cambio=euro*8.231;
			    cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" CNY\n\n";
			    break;
			
		        case 14:
			    cambio=euro*9.179;
			    cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" HKD\n\n";
			    break;
		    }
	        cout<<"Nota che i cambi sono stati registrati il giorno 14/08/2020 e che variano ogni giorno, per valori piu' attendibili consulta un sito web\n";
	        break;
	    
	        //conversione da un altra valuta a euro, continua fino alla riga 193
            case 2 :
		    cout<<"Scrivi il valore da convertire :\n";
	        cin>>valuta;
	    
	        do
	        {
	            cout<<"\nScegli la valuta di cui vuoi sapere il cambio\n";
                cout<<"Inserisci :\n1)  per Dollaro USA (USD)\n2)  per Sterlina Britannica (GBP)\n3)  per Yen Giapponese (JPY)\n4)  per Franco Svizzero (CHF)\n5)  per Dollaro Canadese (CAD)\n6)  per Dollaro Australiano (AUD)\n7)  per BitCoin (BTC)\n8)  per Vecchia Lira Italiana (ITL)\n9)  per Peso Messicano (MXN)\n10)  per Real Brasiliano (BRL)\n11) per Rupia Indiana (INR)\n12) per Won Sudcoreano (KRW)\n13) per Yuan Cinese (CNY)\n14) per Dollaro Hongkonghese (HKD)\n\n";
	            cin>>x;
	        }while(x<=0 || x>14);
	    
	        switch (x)
		    {
		        case 1:
			    cambio=valuta*0.9177;
			    cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" euro\n\n";
			    break;
			
		        case 2:
			    cambio=valuta*1.1119;
			    cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" euro\n\n";
			    break;
			
		        case 3:
			    cambio=valuta*0.0085;
			    cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" euro\n\n";
			    break;

		        case 4:
			    cambio=valuta*0.9473;
			    cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" euro\n\n";
			    break;
			
		        case 5:
			    cambio=valuta*0.6556;
			    cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" euro\n\n";
			    break;
			
		        case 6:
			    cambio=valuta*0.6071;
			    cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" euro\n\n";
			    break;
			
	            case 7:
	    	    cambio=valuta*10026.842;
	    	    cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" euro\n\n";
	    	    break;
	    	
	            case 8:
			    cambio=valuta*0.0005;
			    cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" euro\n\n";
			    break;
			
		        case 9:
			    cambio=valuta*0.0393;
		        cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" euro\n\n";
			    break;
			
		        case 10:
			    cambio=valuta*0.1753;
			    cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" euro\n\n";
			    break;
			
		        case 11:
			    cambio=valuta*0.0121;
			    cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" euro\n\n";
			    break;
			
		        case 12:
			    cambio=valuta*0.0008;
			    cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" euro\n\n";
			    break;
			
		        case 13:
			    cambio=valuta*0.1304;
                cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" euro\n\n";
                break;
			
		        case 14:
			    cambio=valuta*0.1184;
			    cout<<"\nIl cambio e' "<< fixed << setprecision(2) << cambio <<" euro\n\n";
                break;
		    }
            cout<<"Nota che i cambi sono stati registrati il giorno 16/08/2020 e che variano ogni giorno, per valori piu' attendibili consulta un sito web\n";
	        break;
        }
        cout<<"\nVuoi convertire qualcos'altro ?\nPremi 'y' se si,oppure premi 'n' se vuoi terminare il programma :";
        cin>>restart;
    }while(restart=='y');
    	
    system("pause");
	return 0;
}