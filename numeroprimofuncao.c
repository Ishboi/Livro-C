#include <stdio.h>
int primo(int pri)
{
    int yo;

    for(yo=2;yo<pri;yo++)
        if(pri%yo==0) return 0;
        return 1;

}
int main()
{
    int in;
    printf("Insira o numero primo:");
    scanf("%i", &in);
    printf("Resultado: %i %s\n", in, primo(in)?"Primo":"Nao primo");
    return 0;
}
