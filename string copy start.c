#include <stdio.h>
#include <string.h>
int main()
{
    char str1[40]="Ola mundo!!!"; //isto aqui s� se pode fazer em declara��o, n�o se pode definir
                                 //um valor depois da dec�ara��o
    char str2[40];
    char str3[40];

    strcpy (str2,str1); //o 1� � o destino o 2� � a origem, str2 = destino, str1=origem
    strcpy (str3,"Copia bem sucedida");
    printf ("str1: %s\nstr2: %s\nstr3: %s\n" ,str1,str2,str3);
    return 0;


}
