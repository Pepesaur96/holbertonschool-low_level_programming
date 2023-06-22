#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - display a-z followed by new line
 * alphabet - definition of var
 * putchar - prints
 * Return: always 0 success
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}

	putchar('\n');
}
