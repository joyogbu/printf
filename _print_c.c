#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _print_c - function that prints a character
 * @c: character to print
 * Return: 1
 */
int _print_c(va_list c)
{
	char character = (char)va_arg(c, int);

	_putchar(character);
	return (1);
}
