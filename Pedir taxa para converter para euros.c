#include <stdio.h>
int main()
{
    float taxa, dinheiro;

    printf("Insira a taxa:");
    scanf("%f", &taxa);
    printf("Dinheiro:", &dinheiro);
    scanf("%f", &dinheiro);
    printf("Sao %.2f euros", dinheiro*taxa);
    return 0;
}


