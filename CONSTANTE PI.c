#include<stdio.h>
#define PI 3.14
int main()
{
    float r,area;
    const float PI=3.14;
    //const float PI=3.14; 2º METODO DE DEFINIR UMA CONSTANTE
    printf("Raio do circulo:");
    scanf("%f",&r);
    area=PI*r*r;
    printf("Area do circulo:%.2f",area);
    return 0;

}
