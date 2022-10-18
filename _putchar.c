#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - prints out a single character
 * @c: character to print
 * Return: no of charaters printed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
