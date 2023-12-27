#include "main.h"

int _printf(const char *format, ...)
{
va_list args;
int args_number = 0;
int i;
char one_character;
char *str;

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
