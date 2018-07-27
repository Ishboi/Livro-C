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

int x,y;
printf("Insira um numero:");
scanf("%i",&x);
printf("Insira outro numero:");
scanf("%i",&y);
printf("Menor=%i\n",min(x,y));
printf("Menor=%i\n",max(x,y));
return 0;
}
