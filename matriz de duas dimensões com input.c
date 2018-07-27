#include <stdio.h>
int main()
{
    int l,c;
    int temperaturas[2][7];
    for(l=0;l<2;l++)
    {
       printf("Temperaturas %s da semana\n\n",l==0?"minimas":"maximas");
        for(c=0;c<7;c++)
        {
            printf("Dia %i:",c+1);
            scanf("%i",&temperaturas[l][c]);
        }
    }

    printf("\nTemperaturas da semana:\n\n");
    for(l=0;l<2;l++)
    {
        for(c=0;c<7;c++)
            printf("%2d ",temperaturas[l][c]); // para ter 2 decimais mesmo que o número seja só um dígito em vez de dois
        putchar('\n');
    }
    return 0;
}
