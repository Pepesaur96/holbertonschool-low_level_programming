#include "main.h"
#include <stdio.h>
/**
 * _islower - chek for lowercase
 * @c: input variable
 * Return: 1-0
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
	return (1);

	else
	return (0);
}

