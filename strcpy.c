#include <stdio.h>
#include <string.h>
int main()
{
    char str1[]="Ola mundo!!";
    char str2[40];
    char str3[40];
    strcpy (str2,str1); //copia da direita para a esquerda
    strcpy (str3,"Copia bem sucedida"); //copia da direita para a esquerda
    printf("str1: %s\nstr2: %s\nstr3: %s\n",str1,str2,str3);
    return 0;

}
