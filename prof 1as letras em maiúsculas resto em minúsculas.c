#include <string.h>
#include <ctype.h>
int main()
{
    char nome[51];
    int i;
    printf("Qual o seu nome?");
    scanf("%50[^\n]",nome);
    for(i=0;nome[i];i++)
        if(nome[i]!=' ')
        if(i==0||nome[i-1]==' ') //pipe é o OR
        nome[i]=toupper(nome[i]);
        else
            nome[i]=tolower(nome[i]);
        puts(nome);
        return 0;
}
