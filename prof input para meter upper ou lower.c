#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char nome[51];
    int i;
    printf ("Qual o seu nome? ");
    scanf("%50[^\n]",nome);
    for(i=0;nome[i];i++)
    if(isupper(nome[i]))
        nome[i]=tolower(nome[i]);
    else
        nome[i]=toupper(nome[i]);
    puts(nome);
    return 0;

}
