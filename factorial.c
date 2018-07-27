#include<stdio.h>
unsigned long long fact(unsigned long long num)
{
    unsigned long long n, f=1;
    for(n=num;n>0;n--)
    f*=n;
    return f;
}
int main()
{
    int x;
    printf("Insira um numero:");
    scanf("%i",&x);
    printf("Factorial: %llu", fact(x));
    return 0;
           }
