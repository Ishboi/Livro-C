#include<stdio.h> //grau celsius| grau Fahrenheit| ºF = ºC x 1,8 +32 tem que ser ponto
float fht(float celsius)
{
    return celsius*1.8+32;
}
int main()
{
    float cls;
    printf("Insira a temperatura:\n");
    scanf("%f",&cls);
    printf("Temp Fht: %.2f\n",fht(cls));
    return 0;
}
