#include <stdio.h>
#include <stdlib.h>
unsigned long ele(unsigned long igual, unsigned long  expo)
{
    unsigned long base=0, elev;
    base = igual;
    if(expo == 0 /*| expo == 1*/)
    {
        if(expo == 0) return 1;
        /*else return igual;*/
    }
    for(elev=1;elev<expo;elev++)
    {
        base = igual*base;
    }

    return base;

}
int main()
{
    unsigned long in, n;
    printf("Numero: ");
    scanf("%lu", &in);
    printf("Elevado a quanto?");
    scanf("%lu", &n);
    printf("Resultado: %lu\n", ele(in, n)); /* só faz print do in com um %i*/

    system("PAUSE");
    return 0;

}
