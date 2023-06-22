#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints every minute of the day
 * Return: always !0
 */

void jack_bauer(void)
{
	int j, b;

	for (j = 0; j <= 23; j++)
	{
		for (b = 0; b <= 59; b++)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
		}
	}

}
