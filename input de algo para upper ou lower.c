#include <stdio.h>
#include <string.h>
#include <ctype.h> // se n�o meter funciona mas conv�m meter

int main()
{
  char nome[51];//51 porque um dos caracteres � invis�vel
  int i;
  printf(" Qual o seu nome? ");
    scanf("%50[^\n]",nome);
    for(i=0;nome[i];i++)
        //for(i=0;nome[i]!='\0';i++)  //alternativa 1
        //for(i=0;i<strlen(nome);i++) //alternativa 2
        if(isupper(nome[i])) putchar (tolower(nome[i]));
        else if(islower(nome[i])) putchar (toupper(nome[i]));
        else putchar (nome[i]);
    return 0;


}

