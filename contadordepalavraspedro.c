#include <stdio.h>
#include <ctype.h>
char conta(char str[])
{
    int i,cont=0;
    if(str[0]==1) str[0]=' ';
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
