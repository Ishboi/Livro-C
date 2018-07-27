#include <stdio.h>
#include <string.h>

int main()
{
char nome[51];
printf("Qual o seu nome?");
scanf("%50[^\n]",nome); //%50 é o numero de caracteres máximo que pode ter, e o ^ é para especificar que é só um número máximo de 50 caracteres
printf("O seu nome [%s] tem %lu de tamanho\n",nome,strlen(nome));
return 0;
}
