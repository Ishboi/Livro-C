#include <stdio.h>
#include <ctype.h> //o toupper usa o ctype

int main ()
{
    int n=0;
    char nome[]="James Bond\n";
    while (nome[n]!='\0') // '\0 = caracter delimita o fim de linha
    {
        putchar (toupper(nome[n]));
        n++;
    }
    return 0;
}
