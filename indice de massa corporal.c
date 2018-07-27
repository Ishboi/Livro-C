#include <stdio.h>
int main()
{
    float imc, peso, altura;
    printf("Escreva o peso (Kg):");
    scanf("%f", &peso);
    printf("Escreva a altura (Metros):");
    scanf("%f", &altura);
    imc=peso/(altura*altura);
    printf("\nIMC=%f\n\n",imc);
    if (imc<15) printf("Abaixo do peso I\n");
    else if (imc<=18.5) printf("Abaixo do peso\n");
    else if (imc<=24.9) printf("Peso Normal\n");
    else if (imc<=29.9) printf("Acima do peso\n");
    else if (imc<=39.9) printf("Obesidade I\n");
    else printf("Obesidade II\n");
    return 0;
}
