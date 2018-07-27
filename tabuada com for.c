#include <stdio.h>
int main ()
{
int n1, n2;
printf("Insira um numero:");
scanf("%i", &n2);
for (n1=1; n1<=10; n1++)
{
     printf(" %i x %i = %i \n", n2*n1, n2);
}

    return 0;

}
