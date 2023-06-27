#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 * @str: string input
 * Return: void
 */

void puts2(char *str)
{
	int l = 0, count;

	while (str[l] != '\0')
		l++;

	for (count = 0; count < l; count += 2)
		_putchar(str[count]);

	_putchar('\n');
}
