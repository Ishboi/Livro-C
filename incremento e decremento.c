#include <stdio.h>
int main()
{

    int x, y;
    x=1;
    printf("x = %i\n",x);
    y=x++;
    printf("Depois de y=x++ resulta x=%i e y=%i\n" ,x,y);
    x=1;
    y=x--;
    printf("Depois de y=x-- resulta x=%i e y=%i\n",x,y);
    x=1;
    y=++x;
    printf("Depois de y=++x resulta x=%i e y=%i\n",x,y);
    x=1;
    y=--x;
    printf("Depois de y=--x resulta x=%i e y=%i\n",x,y);
    return 0;

}
