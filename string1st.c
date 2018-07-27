#include <stdio.h>
#include <ctype.h>
void strUpper(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
        str[i]=toupper(str[i]);
}
int main()
{
    char nome[51];
    printf("Insira o nome:");
    scanf("%50[^\n]", nome);
    strUpper(nome);
    puts(nome);
    return 0;
}
