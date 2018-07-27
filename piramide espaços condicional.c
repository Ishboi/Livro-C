#include <stdio.h>
int main()
{
    int linha, ast, alt;
    printf("Insira a altura:");
    scanf("%i", &alt);
    for(linha=alt;linha>=1;linha--)
    {
        for(ast=1;ast<alt+linha;ast++)
            printf("%c",ast<=alt-linha?' ':'*');
        printf("\n");
    }
    return 0;
}
