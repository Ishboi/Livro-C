#include <stdio.h>
#include <string.h>

int main()
{
char nome[51];
printf("Qual o seu nome?");
scanf("%50[^\n]",nome); //%50 � o numero de caracteres m�ximo que pode ter, e o ^ � para especificar que � s� um n�mero m�ximo de 50 caracteres
printf("O seu nome [%s] tem %lu de tamanho\n",nome,strlen(nome));
return 0;
}
