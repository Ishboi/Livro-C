#include <stdio.h>
int main()
{
    int idade;
    char nome[51];
    printf("nome\n");
    scanf("%50[^\n]", nome);
    printf("idade\n");
    scanf("%i",&idade);
    if(idade>17)
        printf("Olá %s,es maior de idade", nome);
        else
        printf("ola %s, rapaz", nome);
    return 0;
}
