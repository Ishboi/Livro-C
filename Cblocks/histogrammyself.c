#include <stdio.h>
#define MAXWORD 10
int main()
{
    int MAX[MAXWORD];
    int input, counter, countlength, words, length, newline, numbers, counter2;
    input = counter = counter2 = words = length = newline = numbers = countlength = 0;

    printf("Write author;\n");
    for(counter = 0; counter < 10; counter ++)
    {
        MAX[counter] = 0;
    }
    while((input = getchar()) != EOF )
    {
        if (input == ' ' || input == '\t' || input == '\n')
        {
            if(input == '\n')
            {
                MAX[newline] = length;
                length = 0;
                //countlength++; //porque quero avançar na posição de array
                newline++; //porque aqui está a contar as novas linhas, se estiver a incrementar countlength altero o resultado
            }


        }
        else if (input >= '0' && input <= '9')
        {
            numbers++;
            countlength++;
        }
        else
        {
            words++;
            length++;
            countlength++;
        }


    }
    while(counter2 <= newline)
    {
        for(counter = 0; counter < MAX[counter2] * MAXWORD/countlength; counter++)
        {
            //printf("Sim: %i", MAX[counter]);

            putchar('|');


        }
        putchar ('\n');
        counter2++;

    }




    return 0;
}
