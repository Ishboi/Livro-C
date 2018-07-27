#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char frase[51];
    int i1,i2;
    printf("Insira algo:");
    scanf("%50[^\n]",frase);
    for(i1=0;frase[i1]!='\0';i1++)
        if(frase[i1]==' ')
        {
            for(i2=i1;frase[i2]!='\0';i2++)
                frase[i2]=frase[i2+1];
            i1--; //isto é para caso haja mais que um espaço
        }

            puts(frase);
            return 0;
}
