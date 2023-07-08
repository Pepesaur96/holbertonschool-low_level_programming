#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string to stdout, followed by \n
 * @str: input string to be printed
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
