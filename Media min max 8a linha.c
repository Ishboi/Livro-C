#include <stdio.h>
    int main()
    {
        int l, c, min=0, max=0;
        int temperaturas[2][8];
        for(l=0;l<2;l++)
        {
            printf("Temperaturas %s da semana\n\n", l==0?"minimas":"maximas");
            for(c=0;c<7;c++)
            {
                printf("Dia %i :", c+1);
                scanf("%i",&temperaturas[l][c]);


            }



        }
        for(c=0;c<7;c++)
            {
                min=min +temperaturas[0][c];
                max=max +temperaturas[1][c];
            }
            max= max/7;
            min= min/7;
            temperaturas[0][7]=min;
            temperaturas[1][7]=max;
        printf("\nTemperaturas da semana:\n\n");
        for(l=0;l<2;l++)
        {
            for(c=0;c<8;c++)
            {
                printf("%2d ",temperaturas[l][c]);
            }
            putchar('\n');

        } //printf("min %i max %i", min, max);
        return 0;
    }
