#include <stdio.h>
int main()
{

    int i;
    float notas[5];
    float maior,menor,media=0;
    for(i=0;i<5;i++)
    {
        printf("Insira a sua nota:",i+1);
        scanf("%f",&notas[i]);
    }
    for(i=0;i<5;i++)
    {
        if(i==0)
        {
            maior=notas[1];menor=notas[i];
        }
        if(notas[i]>maior) maior=notas[i];
        if(notas[i]<menor) menor=notas[i];
        media=media+notas[i];


    }
    media=media/5;
    printf("Nota maior:%.2f\n",maior);
    printf("Nota menor:%.2f\n",menor);
    printf("Media:%.2f",media);
    return 0;
}
