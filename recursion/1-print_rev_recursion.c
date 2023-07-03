#include "main.h"
#include <stdio.h>
/**
 *_print_rev_recursion - prints a string in reverse
 *@s: input string
 *Return: 1 if true / 0 if error
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
