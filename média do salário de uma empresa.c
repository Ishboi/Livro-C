#include <stdio.h>
int main()
{
    float tot=0,trab, media, aux;
    printf("Somos quantos?");
    scanf("%f",&trab);
    media=trab;
    while(trab--)
    {
      printf("Insira o seu salario");
        scanf("%f",&aux);
        tot+=aux;
    }
    media=tot/media;
    printf("A media do salario nesta empresa e de %.2f euros", media);
    return 0;

}
