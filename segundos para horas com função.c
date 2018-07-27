#include<stdio.h>
long double horas(long double seg)
{
    return (seg/3600.0);
}
int main()
{
    long double seghor;
    printf("Insira os segundos:\n");
    scanf("%Lf",&seghor);
    printf("Horas: %Lf\n", horas(seghor));
    return 0;
}
