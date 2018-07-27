#include <stdio.h>
int main ()
{
    float milha,km;
    printf("Inserir milha:");
    scanf("%f",&milha);
    km=milha*1.609344;
    printf("%.0f km",km);
    return 0;
}
