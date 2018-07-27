#include <stdio.h>
int main()
{
    int n;
    printf("Escreva um numero");
    scanf("%i",&n);
          printf("%i e um numero %s\n",n,(n%2==0?"Par":"Impar")); //%s chama uma string e a seguir ao n%2==0? vai declarar ou par ou impar e os dois pontos representam o se não
          return 0;
}
