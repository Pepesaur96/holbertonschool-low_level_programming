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
			if (lines * row >= 10)
			{
			_putchar((row * lines) / 10 + '0');
			_putchar((row * lines) % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(row * lines + '0');
			}

			if (row < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
