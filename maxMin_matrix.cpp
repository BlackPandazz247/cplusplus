#include <iostream>
using namespace std;

int main()
{
	int vettore[8] = {24,12,2004,4,7,8,10,1};
	int max=0,min=0,posizzioneMax,posizzioneMin;
	
	for(int i=0;i<8;i++)
	{
	    if(vettore[i]>max)
	    {
	    	max=vettore[i];
	    	posizzioneMax = i;
		}
		else
		{
			min=vettore[i];
			posizzioneMin = i;
	    }
	}
	
	cout<<"Il numero piu' grande nel vettore e' "<< max <<" in posizzione "<< posizzioneMax << endl;
	cout<<"Il numero piu' piccolo nel vettore e' "<< min <<" in posizzione "<< posizzioneMin << endl;
	
	return 0;
}