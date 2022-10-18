#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct form - syructure for defining format specifier to print output
 * @for: format type
 * @f: function to print
 */
typedef struct form
{
	char *for;
	int (*f)(va_list);
} for_mat;

int _putchar(char c);
int _printf(const char *format, ...);

#endif
