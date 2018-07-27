#include <stdio.h>
#include <string.h>
int main()
{
    char str1[]="James Bond 007";
    char  str2[6]="";
    strncpy (str2,str1,5);
    puts (str2);
    return 0;

}
