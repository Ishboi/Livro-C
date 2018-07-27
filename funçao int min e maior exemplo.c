#include<stdio.h>
int min(int x,int y)
{
if (x<y)
return x;
else
return y;
}
int max(int x,int y)
{
if (x>y)
return x;
else
return y;
}
 int main()
{

int a,b;
printf("Insira um numero:");
scanf("%i",&a);
printf("Insira outro numero:");
scanf("%i",&b);
printf("Menor=%i\n",min(a,b));
printf("Maior=%i\n",max(a,b));
return 0;
}
