#include <stdio.h>
#include <string.h>
int main()
{
    char frase[51];
    int cont=0,menor=0,i;
    printf("Insira uma frase:");
    scanf("%50[^\n]",frase);
    for(i=0;frase[i]!='\0';i++)
    {
        if(frase[i]!=' ') cont++;
        if(frase[i+1]==' '||frase[i+1]=='\0')
        {
            if(menor==0) menor=cont;
            if(cont<menor) menor=cont;
            cont=0;
        }
    }
    printf("A menor palavra tem %i caracteres",menor,menor>1?"es":"");
    return 0;
}
