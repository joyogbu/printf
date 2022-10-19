#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * get_format - get the type of the format specifier if present
 * @format: a given format specifier
 * Return: a pointer to the format specifier
 */
int (*get_format(const char *format))(va_list)
{
	int i;
	for_mat formats[] = {
		{"s", _print_s},
		{"c", _print_c},
		{"b", _print_b},
		{"p", _print_p},
		{"d", _print_d},
		{"i", _print_i},
		{"u", _print_u},
		{"o", _print_o},
		{"x", _print_x},
		{"X", _print_X},
		{"S", _print_S},
		{NULL, NULL}
	};

	i = 0;
	for (i = 0; formats[i].fo != NULL; i++)
	{
		if ((*formats[i].fo) == *format)
		{
			return (formats[i].f);
		}
	}
	return (NULL);
}

/**
 * _printf - print output according to a specified format
 * @format: a given format
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list fm;
	int (*f)(va_list);
	unsigned int i = 0;
	int counter = 0;

	if (format == NULL)
		return (-1);
	va_start(fm, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			counter++;
			i++;
			continue;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				counter++;
				i += 2;
				continue;
			}
			else
			{
				f = get_format(&format[i + 1]);
				if (f == NULL)
					return (-1);
				i += 2;
				counter += f(fm);
				continue;
			}
		}
		i++;
	}
	va_end(fm);
	return (counter);
}
