#include <stdio.h>
int main()
{
    int nota;
    printf("nota: ");
    scanf("%i",&nota);
    if(nota<10)
    {
        printf("%i nao satisfaz", nota);
    }
    else if (nota<14)
    {
            printf("%i satisfaz", nota);
    }
    else if (nota <18)
    {
        printf("%i Bom", nota);
    }
    else
    {
        printf("%i Muito Bom",nota);
    }
    return 0;
}
