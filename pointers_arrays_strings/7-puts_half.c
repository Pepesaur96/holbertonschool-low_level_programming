#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints the second half of a string
 * @str: input string
 */

void puts_half(char *str)
{
int n, length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
		n = length / 2;

	else
		n = (length - 1) / 2;

	while (n <= length)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
