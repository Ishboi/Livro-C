#include <stdio.h>
#include <ctype.h> //o toupper usa o ctype

int main ()
{
    int n=0;
    char nome[]="James Bond\n";
    while (nome[n]) // '\0 = caracter delimita o fim de linha
    {
        nome[n]=tolower(nome[n]);
        // nome[n]=toupper(nome[n]); --> para mai�scula
        n++;
    }
    puts(nome);
    return 0;
}
