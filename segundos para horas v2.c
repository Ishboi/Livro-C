#include <stdio.h>
int main()
{
    int segundos;
    printf("Insira os segundos: ");
    scanf("%i",&segundos);
    if(segundos < 60)
    {
        printf("E'/Sao %i segundos", segundos);
    }
        else if(60 <= segundos && segundos < 3600)
        {
             printf("E/Sao %i minuto/s e %i segundos", segundos/60, segundos%60);
        }
        else
        {
        printf("E'/Sao %i Hora/s, %i minutos e %i segundos",segundos/3600,((segundos%3600)/60), segundos%60);
        }

    return 0
        return 0;
}
