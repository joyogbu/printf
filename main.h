#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * struct form - syructure for defining format specifier to print output
 * @fo: format type
 * @f: function to print
 */
typedef struct form
{
	char *fo;
	int (*f)(va_list);
} for_mat;

int _putchar(char c);
int _printf(const char *format, ...);
int _print_c(va_list c);
int _print_s(va_list s);
int _print_i(va_list i);
int _print_d(va_list d);
int _print_b(va_list b);
int _print_p(va_list p);
int _print_u(va_list u);
int _print_o(va_list o);
int _print_x(va_list x);
int _print_X(va_list X);
int _print_S(va_list S);
int _print_r(va_list r);
int _print_R(va_list R);

#endif
