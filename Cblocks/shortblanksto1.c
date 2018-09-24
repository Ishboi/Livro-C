
#include<stdio.h>
#define NONBLANK '-'

int main(void)
{
	int c, lastc;

	lastc = NONBLANK;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			if (lastc != ' ') //condi��o para saber o pr�vio valor, se tiver sido espa�o, n�o volta a meter espa�o enquanto n�o encontrar outro caracter diferente
				putchar(c);
		}
		else
			putchar(c);

		lastc = c;
	}
	getchar();
	return 0;
}
