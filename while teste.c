#include<stdio.h>
int main()
{

    int cont=1;
    do
    {
        printf("%d\n",cont);
        cont*=10;

    }while(cont<=100000);
    return 0;

}
