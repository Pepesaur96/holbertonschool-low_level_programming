#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 0-14 followed by a new line 10 times
 */

void more_numbers(void)
{
int numbers, lines;

	for (lines = 0; lines <= 10; lines++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
			_putchar(numbers + '0');

		_putchar('\n');
	}
}
