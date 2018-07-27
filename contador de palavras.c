#include <stdio.h>
#include <string.h>
int main()
{
    char frase[51];
    int i,cont=0;
    printf("Insira uma frase:");
    scanf("%50[^\n]",frase); //excluindo o barra N
    if(frase[0]==1) frase[0]=' '; //isto é para caso se carregue enter
    for(i=0;frase[i]!='\0';i++)
        if(frase[i]!=' '&&(frase[i+1]==' '||frase[i+1]=='\0'))

           cont++;
    printf("O numero de palavras e: %i", cont); //para fazer output do caracter que está lá basta fazer print de %c
    return 0;

}
 //for(i=0;frase[i]!='\0';i++)
    //  if(frase[i]!=' ')
    //  {
    //      if(frase[i+1]==' ') cont++;
    //      if(frase[i+1]=='\0') cont++;
    //  }
