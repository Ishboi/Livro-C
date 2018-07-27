#include <stdio.h>
int main()
{
    int i;
    float notas[5],max,min,tot=0;
    for(i=0;i<=4;i++)
    {
        printf("Insira %iª nota:", i+1);
        scanf("%f",&notas[i]);
    }
    max=notas[0];
    min=notas[0];
    for(i=0;i<=4;i++)
    {
        if(notas[i]>max) max=notas[i];
        if(notas[i]<min) min=notas[i];
        tot+=notas[i];//tot=tot+notas[i];
    }
    printf("Maior:%.2f\n",max);
    printf("Menor:%.2f\n",min);
    printf("Media:%.2f\n",tot/5);
    return 0;

}
