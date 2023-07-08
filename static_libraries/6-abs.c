#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute of int
 * @abs: interger input
 * Return: returns absolute value of inter
 */

int _abs(int abs)
{
	int val;

	if (abs <= 0)
	{
		val = abs * -1;
		return (val);
	}
	else
		return (abs);
}
