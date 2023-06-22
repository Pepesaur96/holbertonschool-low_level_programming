#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * char alphabet - variable for printing
 *
 * putchar - prints
 *
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
