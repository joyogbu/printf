#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _print_i - A function that prints a base 10 integer
 * @i: integer to print
 * Return: number of printed digits
 */

int _print_i(va_list i)
{
	int a[10];
	int n, j = 1, counter = 0, sum = 0, m = 1000000000;

	n = va_arg(i, int);
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		counter++;                       }
	a[0] = n / m;
	while (j < 10)
	{
		m = m / 10;
		a[j] = (n / m) % 10;
		j++;
	}
	for (j = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar(a[j] + '0');
			counter++;
		}
	}
	return (counter);
}
