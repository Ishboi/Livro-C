#include <stdio.h>
int main()
{
    int i1,i2;
    for (i1=5;i1>=1;i1--)
    {
        for(i2=1;i2<=i1;i2++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
