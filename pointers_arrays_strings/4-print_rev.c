#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a stringin reverse, followed by \n
 * @s: string input
 * Return: void
 */

void print_rev(char *s)
{
	for (; *s >= 0; s--)
	{
		int l = 0;

		while (*s != '\0')
		{
			l++;
			s++;
		}
	_putchar(*s);
	}
	_putchar('\n');
}
