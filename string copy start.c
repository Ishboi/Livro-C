#include <stdio.h>
#include <string.h>
int main()
{
    char str1[40]="Ola mundo!!!"; //isto aqui só se pode fazer em declaração, não se pode definir
                                 //um valor depois da decçaração
    char str2[40];
    char str3[40];

    strcpy (str2,str1); //o 1º é o destino o 2º é a origem, str2 = destino, str1=origem
    strcpy (str3,"Copia bem sucedida");
    printf ("str1: %s\nstr2: %s\nstr3: %s\n" ,str1,str2,str3);
    return 0;


}
