#include<stdio.h>
double horas(double seg)
{
    double res=seg/3600;
    return res;
}
int main()
{
    double seghor;
    printf("Insira os segundos:");
    scanf("%lf",&seghor);
    printf("Horas: %.2lf\n", horas(seghor));
    return 0;
}
