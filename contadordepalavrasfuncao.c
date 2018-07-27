#include <stdio.h>
#include <ctype.h>
#include <string.h>

int cont(char contar[])
{
   int ctdr, tot=0;
   for(ctdr=0;contar[ctdr]!='\0';ctdr++)
       if(contar[ctdr]!=' '&&(contar[ctdr+1]==' '||contar[ctdr+1]=='\0'))
         tot++;

   return tot;

}
int main()
{
    char pala[101]=""; //o ="" é para caso carreguem só enter
    printf("Escreva: ");
    scanf("%100[^\n]", pala);
    printf("Sao %i palavras.", cont(pala));
    return 0;

}
/*
#include <stdio.h>
#include <ctype.h>
char conta(char str[])
{
    int i,cont=0;
    for(i=0;str[i]!='\0';i++)
        if(str[i]!=' '&&(str[i+1]==' '||str[i+1]=='\0'))
            cont++;
    return cont;
}
int main()
{
    char nome[51];
    printf("Insira o nome:");
    scanf("%50[^\n]",nome);
    printf("O numero palavras é %i",conta(nome));
    return 0;
}

*/
