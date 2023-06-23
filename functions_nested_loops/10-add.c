#include "main.h"
#include <stdio.h>
/**
 * add - adds two intergers and returns the result
 * @a: 1st int
 * @b: 2nd int
 * Return: int result
 */

int add(int a, int b)
{
	int plus = (a + b);
	{
		_putchar((a + b) / 10 + '0');
		_putchar((a + b) % 10 + '0');
	}
	_putchar('\n');
	return (plus);
}
