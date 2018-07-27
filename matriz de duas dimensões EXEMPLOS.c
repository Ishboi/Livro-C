#include <stdio.h>
int main()
{
    int l,c;
    int temperaturas[2][7]={{2,3,4,1,2,4,0},{10,11,9,11,12,13,7}};
    printf("Temperaturas da semana:\n\n");
    for(l=0;l<2;l++)
    {
        for(c=0;c<7;c++)
            printf("%2d ",temperaturas[l][c]); // para ter 2 decimais mesmo que o número seja só um dígito em vez de dois
        putchar('\n');
    }
    return 0;
}
