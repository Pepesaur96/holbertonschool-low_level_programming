#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the multiplication table starting with 0
 */

void times_table(void)
{
	int row, lines;

	for (lines = 0; lines < 10; lines++)
	{
		for (row = 0; row < 10; row++)
		{
			_putchar((row * lines) / 10 + '0');
			_putchar((row * lines) % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
