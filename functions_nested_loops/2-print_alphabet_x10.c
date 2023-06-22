#include "main.h"
#include <stdio.h>
/**
 *print_alphabet_x10 - (prints alphabet)x10
 *Return: always !0
 */

void print_alphabet_x10(void)
{
	int t = 0;
	int a = 'a';

	while (t < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		putchar ('\n');
		t++;
	}
}
