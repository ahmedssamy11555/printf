#include "main.h"


/**
* _printf - function that simulates the stdio real printf function
* @format: pointer to character
* Return: number of characters passed
*/


int _printf(const char *format, ...)
{
va_list args;
int args_number = 0;
int i;
char one_character;
char *str;
int user__d_number;
int user_i_number;




va_start(args, format);

if (format == NULL)
{
return (-1);
}

while (*format)
{
if (*format == '%')
{
switch (*(++format))
{
case 'c':
one_character = va_arg(args, int);
_putchar(one_character);
break;
case 's':
str = va_arg(args, char*);
if (str != NULL)
{
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
else
{
_putchar(' ');
}
break;
case '%':
_putchar('%');
break;
case 'd':
user__d_number = va_arg(args, int);
print_postive_or_negative_number(user__d_number);
break;
case 'i':
user_i_number = va_arg(args, int);
print_postive_or_negative_number(user_i_number);
break;
default:
_putchar('?');
break;
}
}
else
{
_putchar(*format);
}
format++;
args_number++;
}

va_end(args);
return (args_number);
}
