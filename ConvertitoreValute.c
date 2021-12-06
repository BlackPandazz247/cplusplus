/*Programma che converte gli euro in un altra valuta oppure un altra valuta in euro*/

#include <stdio.h>

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
	        printf("Premi 1 per convertire gli euro in un altra valuta o premi 2 per convertire un altra valuta in euro : ");
	        scanf("%d",&scelta);
	    }while(scelta<=0 || scelta>2);
	    
	    switch(scelta)
	    {   
		    //conversione da euro a altra valuta, continua fino alla riga 106
		    case 1: 
	        printf("Scrivi il valore in euro da convertire :\n");
	        scanf("%lf",&euro);
	    
	        do
	        {
	            printf("\nScegli la valuta di cui vuoi sapere il cambio\n");
                printf("Inserisci :\n1)  per Dollaro USA (USD)\n2)  per Sterlina Britannica (GBP)\n3)  per Yen Giapponese (JPY)\n4)  per Franco Svizzero (CHF)\n5)  per Dollaro Canadese (CAD)\n6)  per Dollaro Australiano (AUD)\n7)  per BitCoin (BTC)\n8)  per Vecchia Lira Italiana (ITL)\n9)  per Peso Messicano (MXN)\n10)  per Real Brasiliano (BRL)\n11) per Rupia Indiana (INR)\n12) per Won Sudcoreano (KRW)\n13) per Yuan Cinese (CNY)\n14) per Dollaro Hongkonghese (HKD)\n\n");
	            scanf("%d",&x);
	        }while(x<=0 || x>14);
	    
	        switch(x)
	        {
	    	    case 1:
			    cambio=euro*1.18423;
			    printf("\nIl cambio e' %.2lf USD\n\n",cambio);
			    break;
			
		        case 2:
			    cambio=euro*0.9051;
			    printf("\nIl cambio e' %.2lf GPB\n\n",cambio);
			    break;
			
		        case 3:
			    cambio=euro*126.231;
			    printf("\nIl cambio e' %.2lf JPY\n\n",cambio);
			    break;
		
		        case 4:
			    cambio=euro*1.07649;
			    printf("\nIl cambio e' %.2lf CHF\n\n",cambio);
			    break;
			
		        case 5:
			    cambio=euro*1.5706;
			    printf("\nIl cambio e' %.2lf CAD\n\n",cambio);
			    break;
			
		        case 6:
			    cambio=euro*1.651425;
			    printf("\nIl cambio e' %.2lf AUD\n\n",cambio);
			    break;
			
	            case 7:
	    	    cambio=euro*0.00010050;
	    	    printf("\nIl cambio e' %lf BTC\n\n",cambio);
	    	    break;
	    	
	            case 8:
			    cambio=euro*1936.27;
			    printf("\nIl cambio e' %.2lf ITL\n\n",cambio);
			    break;
			
		        case 9:
			    cambio=euro*26.036;
			    printf("\nIl cambio e' %.2lf MXN\n\n",cambio);
			    break;
			
		        case 10:
			    cambio=euro*6.4206;
			    printf("\nIl cambio e' %.2lf BRL\n\n",cambio);
			    break;
			
		        case 11:
			    cambio=euro*88.704;
			    printf("\nIl cambio e' %.2lf INR\n\n",cambio);
			    break;
		
		        case 12:
			    cambio=euro*1405.75;
		        printf("\nIl cambio e' %.2lf KRW\n\n",cambio);
			    break;
			
		        case 13:
			    cambio=euro*8.231;
			    printf("\nIl cambio e' %.2lf CNY\n\n",cambio);
			    break;
			
		        case 14:
			    cambio=euro*9.179;
			    printf("\nIl cambio e' %.2lf HKD\n\n",cambio);
			    break;
		    }
	   	
	        printf("Nota che i cambi sono stati registrati il giorno 14/08/2020 e che variano ogni giorno, per valori piu' attendibili consulta un sito web\n");
	        break;
	    
	        //conversione da un altra valuta a euro, continua fino alla riga 193
            case 2 :
		    printf("Scrivi il valore da convertire :\n");
	        scanf("%lf",&valuta);
	    
	        do
	        {
	            printf("\nScegli la valuta di cui vuoi sapere il cambio\n");
                printf("Inserisci :\n1)  per Dollaro USA (USD)\n2)  per Sterlina Britannica (GBP)\n3)  per Yen Giapponese (JPY)\n4)  per Franco Svizzero (CHF)\n5)  per Dollaro Canadese (CAD)\n6)  per Dollaro Australiano (AUD)\n7)  per BitCoin (BTC)\n8)  per Vecchia Lira Italiana (ITL)\n9)  per Peso Messicano (MXN)\n10)  per Real Brasiliano (BRL)\n11) per Rupia Indiana (INR)\n12) per Won Sudcoreano (KRW)\n13) per Yuan Cinese (CNY)\n14) per Dollaro Hongkonghese (HKD)\n\n");
	            scanf("%d",&x);
	        }while(x<=0 || x>14);
	    
	        switch (x)
		    {
		        case 1:
			    cambio=valuta*0.9177;
			    printf("\nIl cambio e' %.2lf euro\n\n",cambio);
			    break;
			
		        case 2:
			    cambio=valuta*1.1119;
			    printf("\nIl cambio e' %.2lf euro\n\n",cambio);
			    break;
			
		        case 3:
			    cambio=valuta*0.0085;
			    printf("\nIl cambio e' %.2lf euro\n\n",cambio);
			    break;

		        case 4:
			    cambio=valuta*0.9473;
			    printf("\nIl cambio e' %.2lf euro\n\n",cambio);
			    break;
			
		        case 5:
			    cambio=valuta*0.6556;
			    printf("\nIl cambio e' %.2lf euro\n\n",cambio);
			    break;
			
		        case 6:
			    cambio=valuta*0.6071;
			    printf("\nIl cambio e' %.2lf euro\n\n",cambio);
			    break;
			
	            case 7:
	    	    cambio=valuta*10026.842;
	    	    printf("\nIl cambio e' %.2lf euro\n\n",cambio);
	    	    break;
	    	
	            case 8:
			    cambio=valuta*0.0005;
			    printf("\nIl cambio e' %.2lf euro\n\n",cambio);
			    break;
			
		        case 9:
			    cambio=valuta*0.0393;
		        printf("\nIl cambio e' %.2lf euro\n\n",cambio);
			    break;
			
		        case 10:
			    cambio=valuta*0.1753;
			    printf("\nIl cambio e' %.2lf euro\n\n",cambio);
			    break;
			
		        case 11:
			    cambio=valuta*0.0121;
			    printf("\nIl cambio e' %.2lf euro\n\n",cambio);
			    break;
			
		        case 12:
			    cambio=valuta*0.0008;
			    printf("\nIl cambio e' %.2lf euro\n\n",cambio);
			    break;
			
		        case 13:
			    cambio=valuta*0.1304;
                printf("\nIl cambio e' %.2lf euro\n\n",cambio);
                break;
			
		        case 14:
			    cambio=valuta*0.1184;
			    printf("\nIl cambio e' %.2lf euro\n\n",cambio);
                break;
		    }
            printf("Nota che i cambi sono stati registrati il giorno 16/08/2020 e che variano ogni giorno, per valori piu' attendibili consulta un sito web\n");
	        break;
        }
        printf("\nVuoi convertire qualcos'altro ?\nPremi 'y' se si,oppure premi 'n' se vuoi terminare il programma :");
        scanf(" %c",&restart);
    }while(restart=='y');
    	
    system("pause");
	return 0;
	
}