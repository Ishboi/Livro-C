#include <stdio.h>
int main()
{
    int i;
    float notas[5]={15.5,12.2,9.3,12.0,9.5};
    notas[4]=10;
    for(i=0;i<5;i++)
        printf("%5.2f\n",notas[i]); //5.2 o 5 serve para ter a certeza q os n�meros mesmo que n�o sejam 5 no total acrescenta espa�os
    return 0;
}
