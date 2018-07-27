#include <stdio.h>
int main()
{
    int horas, minutos, segundos;
    printf("Insira os segundos");
    scanf("%i", &segundos);
    minutos=(segundos-(segundos%3600)/60);
    printf("Sao %i horas e %i minutos", minutos/60, minutos/60);
        return 0;
}
