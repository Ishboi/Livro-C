#include <stdio.h>
int main()
{
    char c;
    int d,o,h;
    float f;
    c='*';
    d=31;
    o=037;
    h=0x1F;
    f=10.5;
    printf("Carater:      %c\n", c);
    printf("Decimal:      %d\n",d);
    printf("Octal:        %o\n",o);
    printf("Hexadecimal:  %x\n",h);
    printf("Real:         %f\n",f);
    return 0;
}
