#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
int number_length(int number);
void print_positive_or_negative_number(int positve_number);
#endif
