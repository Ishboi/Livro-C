#include <stdio.h>
#define ESC 0x1B
#define BACK_SPACE 0x08
#define NONBLANK '-'
#define  SPACE "||"


int main(void)
{
    int c, lastc;

    lastc=NONBLANK;

    while((c=getchar()) != EOF)
    {

        if( c == ' ')
        {
            if(lastc != ' ')
                printf(SPACE); //não esttá a apagar

        }
        else if(c == BACK_SPACE)
        {
            putchar('\\');
            putchar('b');
        }
        else if(c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if(c == '\\')
        {
            putchar('\\');
        }
        if (c !='\t' && c !='\b' && c!= '\\')
        {
             putchar(c);
        }


        lastc=c;
    }
    return 0;


}

