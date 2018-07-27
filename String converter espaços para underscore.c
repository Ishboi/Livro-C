#include <stdio.h>
#include <string.h>

int main()
{
  char nome[51];//51 porque um dos caracteres é invisível
  int i;
  printf(" Qual o seu nome? ");
    scanf("%50[^\n]",nome);
    for(i=0;nome[i];i++)
        //for(i=0;nome[i]!='\0';i++)  //alternativa 1
        //for(i=0;i<strlen(nome);i++) //alternativa 2
        if(nome[i]==' ')
            nome[i]='_';
    puts(nome);
    return 0;


}

