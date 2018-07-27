#include <stdio.h>
int main()
{
    const MAX=5;
    int ast, col;
    for(ast=1;ast<=MAX;ast+=2)
    {
        for(col=1;col<=(MAX-ast)/2+ast;col++)
            printf("%c",col<=(MAX-ast)/2?' ':'*');
        printf("\n");

    }
    return 0;
}
