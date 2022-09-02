#include <stdio.h>
#include <math.h>

struct nomi{
    char c[] = "c string/0";
}tNomi;

int main()
{
    float c1,c2, ipotenusa;

    printf("Inserisci il primo cateto: ");
    scanf("%f", &c1);
    printf("Inserisci il secondo cateto: ");
    scanf("%f", &c2);

    ipotenusa = sqrt(pow(c1,2) + pow(c2,2));

    printf("L'ipotenusa del triangolo vale %.3f",ipotenusa);

    return 0;
}