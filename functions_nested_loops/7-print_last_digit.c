#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @i: input inter
 * Return: last digit
 */

int print_last_digit(int i)

{
	int r = i % 10;

	if (r < 0)
		r *= -1;

	_putchar(r + '0');

	return (r);
}
