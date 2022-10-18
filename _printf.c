#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

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
		{"d", _print_d},
		{"i", _print_i},
		{"b", _print_b},
		{"u", _print_u},
		{"o", _print_o},
		{"x", _print_x},
		{"p", _print_p},
		{"S", _print_S},
		{"r", _print_r},
		{"R", _print_R},
		{NULL, NULL}
	};

	i = 0;
	for (i = 0; formats[i] != NULL i++)
	{
		if (formats[i].form == *format)
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
int count = 0;
if (format == NULL)
return (-1);
va_start(fm, format);
while (formats & formats[i])
if (formats[i] != '%')
{
_putchar(formats[i]);
counter++;
i++;
continue;
else
{
if (formats[i] == '%')
{
_putchar ('%');
counter++;
i += 2;
continue;
}
else
{
f = get_format(&formats[i + 1]);
if (f == NULL)
{
return (-1);
}
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
