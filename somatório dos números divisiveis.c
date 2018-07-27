#include<stdio.h>
unsigned long long divi(unsigned long long soma)
{
    unsigned long long s, d=0, aux=0;

    for(s=1;s<=soma;s++)
    {

        if(soma%s==0)
        {
            aux=s;
            d+=aux;
        }
    }


    return d;

}
int main()
{
    unsigned long long in;
    printf("Insira o que quer dividir:");
    scanf("%llu",&in);
    printf("Soma dos numeros reais divisiveis %i", divi(in));
    return 0;

}
