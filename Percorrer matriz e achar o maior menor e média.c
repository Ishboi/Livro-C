#include <stdio.h>
int main()
{

    int i;
    float notas[5]={15.5,12.2,9.3,12.0,9.5};
    float maior=notas[0],menor=notas[0],media=notas[0];
    for(i=1;i<5;i++)
    {
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
