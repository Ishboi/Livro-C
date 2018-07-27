#include <stdio.h>
int main()
{
    int ast, linha, alt;
    printf("Insira a altura:");
    scanf("%i", &alt);
    for(linha=1; linha<=alt; linha++)
    {
        for(ast=1;ast<alt+linha;ast++)
        {
            if(ast<=alt-linha)
                printf(" ");
            else
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
