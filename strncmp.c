#include <stdio.h>
#include <string.h>

int main()
{
    char nome1[] = "Ilha da Madeira";
    char nome2[] = "Ilha do Pico";
    if (strncmp (nome1,nome2,4) == 0)
        puts ("Os 4 primeiros caracteres sao identicos");
    else
        puts ("Os 4 primeiros caracteres nao sao identicos");
        return 0;
}
