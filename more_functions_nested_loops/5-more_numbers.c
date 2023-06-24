#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 0-14 followed by a new line 10 times
 */

void more_numbers(void)
{
int numbers, lines, first, last;

	for (lines = 0; lines <= 10; lines++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
		first = (numbers / 10);
		last = (numbers % 10);

			if (numbers > 9)
			{
				_putchar((first + last) + '0');
			}
			else
				_putchar(numbers + '0');
		}

		_putchar('\n');
	}
}
