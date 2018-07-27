#include <stdio.h>
#include <ctype.h>
void deleEspa(char str[])
{
    int dele, dele2;
    for(dele=0; str[dele];dele++)
        if(str[dele]==' ')
        {
            for(dele2=dele; str[dele2]!='\0';dele2++)
                str[dele2]=str[dele2+1];
            dele--;
        }

}
int main()
{
    char brancos[51];
    printf("Escreva:\n");
    scanf("%50[^\n]", brancos);
    deleEspa(brancos);
    puts(brancos);
    return 0;
}
