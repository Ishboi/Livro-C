#include <stdio.h>
int main()
{
    int ast,linha,alt=5;
    for(linha=1;linha<=alt;linha++)
    {
        for(ast=1;ast<alt+linha;ast++)
        {
            if(ast<=alt-linha)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
