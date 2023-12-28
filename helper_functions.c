#include "main.h"


int number_length(int number)
{
    int lenght = 0;
    while (number != 0)
    {
        number /= 10;
        lenght++;
    }
    return lenght;
}


void print_postive_or_negative_number(int postive_or_negative_number)
{

int number_lenght;
int *digits;
int i;
if (postive_or_negative_number < 0)
{
    _putchar('-');
    postive_or_negative_number = -postive_or_negative_number;
}


number_lenght = number_length(postive_or_negative_number);

digits = (int *)malloc(number_lenght *sizeof(int));
for (i = 0; i < number_lenght; i++)
{
digits[i] = postive_or_negative_number % 10;
postive_or_negative_number /= 10;
}
for (i = number_lenght - 1; i >= 0; i--)
{
_putchar(digits[i] + '0');
}
free(digits);
}
