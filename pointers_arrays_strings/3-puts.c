#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string to stdout, followed by \n
 * @str: input string to be printed
 * Return: void
 */

void _puts(char *str)
{
	for (*str = 0; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
