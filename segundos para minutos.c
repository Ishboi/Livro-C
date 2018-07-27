#include <stdio.h>
int main()
{
    float segundos;
    int minutos;
    printf("Insira os segundos: ");
    scanf("%f",&segundos);
    printf("Equivalente a %.2f minutos", segundos/60);
    return 0;
}
