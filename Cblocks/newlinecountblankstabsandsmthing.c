#include <stdio.h>

int main()

{
    int c, nl, tabs, blanks, removerblank;

    nl = 0;
    tabs = 0;
    blanks = 0;

    while((c = getchar()) != EOF)
    {
         putchar(c);
        if (c == '\n')
        {

            ++nl;
        }
        else if ( c == '\t')
        {
            ++tabs;

        }
        else if (c == ' ')
        {


            ++blanks;
        }
    }

        printf("Blanks: %d\n Tabs: %d\n Newlines: %d\n", blanks, tabs, nl);

        return 0;
}
