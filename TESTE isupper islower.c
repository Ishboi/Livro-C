#include <stdio.h>
#include <ctype.h>
int main()
{
    int n=0;
    char nome[]="James Bond\n";
    while (nome[n])
    {
        if(isupper(nome[n])) putchar (tolower(nome[n]));
        else if(islower(nome[n])) putchar (toupper(nome[n]));
        else putchar (nome[n]);
        n++;
    }
    return 0;

}
