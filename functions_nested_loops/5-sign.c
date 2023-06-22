#include "main.h"
#include <stdio.h>
/**
 * print_sign - prints the sign of n
 * @n: input int
 * Return: 1-0
 */

int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
	else if (n < 0)
		_putchar('-');
	else
		_putchar('0');
}
