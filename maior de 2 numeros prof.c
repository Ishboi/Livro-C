#include <stdio.h>
int main()
{
    int num1, num2;
	printf("num1:");
	scanf("%i",&num1);
	printf("num2:");
    scanf("%i",&num2);
	if(num1>num2)
	printf("%i é o maior", num1);
	else
	printf("%i e o maior", num2);
	return 0;

}
