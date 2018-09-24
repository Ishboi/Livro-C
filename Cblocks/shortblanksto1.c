
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
			if (lastc != ' ') //condição para saber o prévio valor, se tiver sido espaço, não volta a meter espaço enquanto não encontrar outro caracter diferente
				putchar(c);
		}
		else
			putchar(c);

		lastc = c;
	}
	getchar();
	return 0;
}
