#include "main.h"
#include <stdio.h>
/**
 * main - display a-z followed by new line
 * print_alphabet - var for printing
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
