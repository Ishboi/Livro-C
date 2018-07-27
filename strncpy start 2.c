#include <stdio.h>
#include <string.h>
int main()
 {
     char str1[40]= "James Bond 007";
     char str2[40]="dsfsfdsfsdfsd";
     strncpy(str2,str1,5); //aqui o 5 quer dizer que copia os primeiros 5 caracteres
     str2[5]='\0';
     puts (str2);
     return 0;
 }
