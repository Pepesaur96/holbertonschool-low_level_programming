#include "main.h"
#include <stdio.h>
/**
 *_pow_recursion - returns the value of x
 *raised to the power of y
 *@x: input int
 *@y: input int
 *Return: result value
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));

	else if (y < 0)
		return (-1);

	else
		return (1);
}
