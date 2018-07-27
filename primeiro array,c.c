#include <stdio.h>
int main()
{
    int i;
    float notas[5];//={15.5,12.2,9.3,12.0,9.5};
    //notas [4]=10;
    for(i=0;i<=4;i++)
    {
        printf("Insira a nota:");
        scanf("%f",&notas[i]);
    }
    for(i=0;i<5;i++)
        printf("%5.2f\n",notas[i]);
    return 0;
}
