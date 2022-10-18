#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _print_s - prints a string of characters
 * @s: string to print
 * Return: strings printed
 */
int _print_s(va_list s)
{
	int i;

	i = 0;
	char *str = va_arg(s, char *);

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}