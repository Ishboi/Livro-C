#include <stdio.h>
#include <ctype.h>
void strUnder(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
             if(str[i]==' ')
               str[i]='_'; // é assim que se define a matriz para X neste caso o underscore



}
int main()
{
    char espacos[51];
    printf("Escreva algo com espacos:");
    scanf("%50[^\n]", espacos);
    strUnder(espacos);
    puts(espacos);
    return 0;
}
