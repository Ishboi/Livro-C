#include <stdio.h>
#define MAXWORD 10

int main()
{
    int max, counter, input, newline, length, counter2, countlength, words, numbers, total;
    counter = counter2 = countlength  = input = newline = length  = words = numbers = total = 0;
    printf("Max altura:\n");
    scanf("%i", &max);
    int MAX[max];
    for(counter = 0; counter < max; counter++)
    {
        MAX[counter] = 0;
    }
    while((input = getchar()) != EOF)
    {
        if(input == ' ' || input == '\t' || input == '\n')
        {
            if (input == '\n')
            {
                MAX[newline] = length;
                length = 0;
                newline++;
            }
        }
        else if (input >= '0' && input <='9')
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
    for(;counter2 < max; counter2++)
    {
        MAX[counter2] = MAX[counter2] * MAXWORD/countlength;
    }
    counter2 = 0;
    while(counter2 <= newline)
    {
        for(counter = 0; counter < MAX[counter2] * MAXWORD/countlength; counter++)
        {
            printf("_");
        }
        counter2++;
    }

    printf("yo: \n%d", max, max);

    return 0;
}
