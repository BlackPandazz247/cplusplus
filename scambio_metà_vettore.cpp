#include <iostream>

using namespace std;

int main()
{
	int N;
	
	do
	{
		cout<<"Inserisci la dimensione del vettore (numero pari e minore di 100) :";
		cin>>N;
	}
	while(N>100 || N<=0 || N %2 != 0);
	
	int meta_vettore=(N/2);
	int vettore[N];
	int prima_meta_vettore[meta_vettore];
	int seconda_meta_vettore[meta_vettore];
	int j=meta_vettore;
	
	for(int i=0;i<N;i++)
	{
		cout<<"Inserisci il "<< (i+1) <<"° numero del vettore :";
		cin>>vettore[i];
	}
	
    for(int i=0;i<meta_vettore;i++)
	{   
		seconda_meta_vettore[i]=vettore[j];
	    prima_meta_vettore[i]=vettore[i];
	    vettore[i]=seconda_meta_vettore[i];
	    vettore[j]=prima_meta_vettore[i];
		j++;
	}
	
   cout<<"\n\n";
   
   for(int i=0;i<N;i++)
   {
   	   cout<<"\nIl "<< (i+1) <<"° numero ora e' "<< vettore[i] <<endl;
   }
	
	return 0;
	
}
