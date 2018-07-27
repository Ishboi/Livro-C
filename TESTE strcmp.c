#include <stdio.h>
#include <string.h>
int main()
{
    char capFranca[] = "Paris";
    char capital[20];
    do{
        printf ("Qual a capital de Franca?");
        scanf(" %20[^\n]",capital);
    } while (strcmp (capFranca,capital)!=0);
    puts ("Resposta Correcta!");
    return 0;
}
