#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>
using namespace std;

void selector(unsigned short color)
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon,color);
}

void stampaCheck(int check[])
{
    for(int i=0;i<4;i++)
    {
        cout<<check[i]<<" ";
    }
}

void stampaCheckPesati(int check[])
{
    for(int i=3;i>=0;i--)
    {
        cout<<check[i]<<" ";
    }
}

void calcolaCheck(int tabella[][7], int stringa[], int check[], int parityInt)
{
    int somma;

    if(parityInt == 0)
    {
        for(int i=0;i<4;i++)
        {
            somma = 0;
            for(int j=0;j<7;j++)
            {
                if(stringa[tabella[i][j]-1] == 1)
                {
                    somma++;
                }
            }
            if(somma%2 == 0)
            {
                somma = 0;
                for(int j=0;j<7;j++)
                {
                    if(stringa[tabella[i][j]-1] == 1)
                    {
                        somma++;
                    }
                }
                if(somma%2 == 0)
                {
                    check[i] = 1;
                }
                else
                {
                    check[i] = 0;
                } 
            } 
        }
    }
}

void estraiCheck(int codeword[], int checkRicevuti[])
{
    for(int i=0,j=0;i<15;i++)
    {
        if((i == 0 || i==1 || i==3 || i==7))
        {
            checkRicevuti[j] = codeword[i];
            j++;
        }
    }
}

int xorCheck(int checkRicevuti[],int checkRicalcolati[])
{
    int risXor[4], posError;

    for(int i=0;i<4;i++)
    {
        if(checkRicevuti[i] == checkRicalcolati[i])
        {
            risXor[i] = 0;
        }
        else
        {
            risXor[i] = 1;
        }
    }

    cout<<"XOR risultante:";
    for(int i=3;i>=0;i--)
    {
        cout<<risXor[i];
    }

    posError = 0;
    for(int i=0;i<4;i++)
    {
        posError += risXor[i]*pow(2,i);
    }

    return posError;
}

void stampaDati(int stringaDati[])
{
    for(int i=0;i<11;i++)
    {
        cout<<stringaDati[i];
    }
    cout<<"\n";
}

void stampaCodeword(int codeword[], int color, int posError)
{
    for(int i=0;i<15;i++)
    {
        if((i==0 || i==1 || i==3 || i==7))
        {
            selector(12);
        }
        else
        {
            selector(color);
        }
        if(i == posError)
        {
            selector(14);
        }
        cout<<codeword[i];
    }
    selector(color);
    cout<<endl;
}

int main(int argc,char *argv[])
{	
    int checkMitt[4], checkDest[4], checkRicevuti[4], stringaDati[11], codeword[15];
    int posError, parityInt;
    char parity;
    int tabella[4][7] = {{3,5,7,9,11,13,15},{3,6,7,10,11,14,15},{5,6,7,12,13,14,15},{9,10,11,12,13,14,15}};

	do
    {
        cout<<"Scegliere la parita' da utilizzare [p/d]: ";
        cin>>parity;

        if(parity != 100 && parity != 112)
        {
            cout<<"Input errato\n";
        }
        else
        {
            if(parity == 100)
            {
                parityInt = 1;
            }
            else
            {
                parityInt = 0;
            }
        } 
    } while(parity != 100 && parity != 112);

	return 0;
}