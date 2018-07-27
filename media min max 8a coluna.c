#include<stdio.h>
int main()
{
    int l,c;
    int temperaturas[2][8];
    temperaturas[0][7]=0;temperaturas[1][7]=0;
    for(l=0;l<2;l++)
    {
        printf("\nTemperaturas %s da semana\n\n",l==0?"minimas":"maximas");
        for(c=0;c<7;c++)
        {
            printf("Dia %i:",c+1);
            scanf("%i",&temperaturas[l][c]);
            temperaturas[l][7]+=temperaturas[l][c];

        }
        temperaturas[l][7]/=7;
    }
    printf("\nTemperaturas da semana:\n\n");
    for(l=0;l<2;l++)
    {
        for(c=0;c<8;c++)
        printf("%3d",temperaturas[l][c]);
        putchar('\n');
    }
    return 0;

}
