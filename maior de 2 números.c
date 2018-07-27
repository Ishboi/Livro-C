#include <stdio.h>
int main()
{
    int numero1;
    int numero2;
    printf("Insira um número:\n");
    scanf("%i", &numero1);
    printf("Insira outro número:\n");
    scanf("%i", &numero2);
    if(numero1>numero2)
        printf("O maior e %i", numero1);
    else
        printf("O maior e %i", numero2);
    return 0;

}
