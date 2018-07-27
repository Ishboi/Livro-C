#include <stdio.h>
#include <string.h>

int main()
{
   char nome1[50]="James";
    char nome2[50]=" Bond 007";
    strncat(nome1,nome2,5);
    puts (nome1);
    return 0;
}


