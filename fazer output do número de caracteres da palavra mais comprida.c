#include <stdio.h>
int main()
{
    char frase[51];
    int cont=0,maior=0,i;
    printf("Insira uma frase:");
    scanf("%50[^\n]",frase);
    for(i=0;frase[i]!='\0';i++)
    {
        if(frase[i]!=' ') cont++;
        if(frase[i+1]==' '||frase[i+1]=='\0') // || quer dizer OU
        {
            if(cont>maior) maior=cont;
            cont=0;
        }
    }
    printf("A maior palavra tem %i caracteres",maior);

    return 0;
}
